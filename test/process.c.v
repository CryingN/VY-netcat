module os

// 用于与子进程通信的管道文件描述符的类型
pub enum ChildProcessPipeKind {
        stdin
        stdout
        stderr
}

// signal_kill - 终止进程，之后它不再运行
pub fn (mut p Process) signal_kill() {
        if p.status !in [.running, .stopped] {
                return
        }
        p._signal_kill()
        p.status = .aborted
}

// signal_term - 终止进程
pub fn (mut p Process) signal_term() {
        if p.status !in [.running, .stopped] {
                return
        }
        p._signal_term()
}

// signal_pgkill - 杀死整个进程组
pub fn (mut p Process) signal_pgkill() {
        if p.status !in [.running, .stopped] {
                return
        }
        p._signal_pgkill()
}

// signal_stop - 停止进程，您可以使用p.signal_continue()恢复它
pub fn (mut p Process) signal_stop() {
        if p.status != .running {
                return
        }
        p._signal_stop()
        p.status = .stopped
}

// signal_continue - 告诉已停止的进程继续/恢复其工作
pub fn (mut p Process) signal_continue() {
        if p.status != .stopped {
                return
        }
        p._signal_continue()
        p.status = .running
}

// wait - 等待进程完成。
// Note: 你必须调用p.wait（），
// 否则一个已完成的进程将进入僵尸状态，
// 其资源将不会完全释放，
// 直到其父进程退出。
// Note: 此调用将阻止调用进程，
// 直到子进程完成。

pub fn (mut p Process) wait() {
        if p.status == .not_started {
                p._spawn()
        }
        if p.status !in [.running, .stopped] {
                return
        }
        p._wait()
}

// close - 释放与该进程相关联的OS资源。
// 可以多次调用，但只会释放一次资源。
// 这将进程状态设置为.closed，这是最终状态。
pub fn (mut p Process) close() {
        if p.status in [.not_started, .closed] {
                return
        }
        p.status = .closed
        $if !windows {
                for i in 0 .. 3 {
                        if p.stdio_fd[i] != 0 {
                                fd_close(p.stdio_fd[i])
                        }
                }
        }
}

@[unsafe]
pub fn (mut p Process) free() {
        p.close()
        unsafe {
                p.filename.free()
                p.err.free()
                p.args.free()
                p.env.free()
        }
}

//
// _spawn - 不应该直接调用，而只能由p.run() / p.wait()调用。
//它封装了fork/execve机制，允许
//新子进程的异步启动。
fn (mut p Process) _spawn() int {
        if !p.env_is_custom {
                p.env = []string{}
                current_environment := environ()
                for k, v in current_environment {
                        p.env << '${k}=${v}'
                }
        }
        mut pid := 0
        $if windows {
                pid = p.win_spawn_process()
        } $else {
                pid = p.unix_spawn_process()
        }
        p.pid = pid
        p.status = .running
        return 0
}

// is_alive - 查询进程p.pid是否仍然有效
pub fn (mut p Process) is_alive() bool {
        mut res := false
        if p.status in [.running, .stopped] {
                res = p._is_alive()
        }
        $if trace_process_is_alive ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, res: ${res}')
        }
        return res
}

// 重定向流
pub fn (mut p Process) set_redirect_stdio() {
        p.use_stdio_ctl = true
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}')
        }
}

// stdin_write - 将把字符串's'写入子进程的stdin管道。
pub fn (mut p Process) stdin_write(s string) {
        p._check_redirection_call(@METHOD)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, s.len: ${s.len}, s: `${s}`')
        }
        p._write_to(.stdin, s)
}

// stdout_slurp - 将从stdout管道读取，并将阻塞，直到它读取所有数据，或者直到管道关闭（文件结束）。
pub fn (mut p Process) stdout_slurp() string {
        p._check_redirection_call(@METHOD)
        res := p._slurp_from(.stdout)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, res.len: ${res.len}, res: `${res}`')
        }
        return res
}

// stderr_slurp - 将从stderr管道读取，并将阻塞，直到它读取所有数据，或者直到管道关闭（文件结束）。
pub fn (mut p Process) stderr_slurp() string {
        p._check_redirection_call(@METHOD)
        res := p._slurp_from(.stderr)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, res.len: ${res.len}, res: `${res}`')
        }
        return res
}

// stdout_read - 从子进程的stdout管道读取数据块。如果没有要读取的数据，它将阻塞。
// 如果你不想阻塞，调用.is_pending()来检查是否有要读取的数据。
pub fn (mut p Process) stdout_read() string {
        p._check_redirection_call(@METHOD)
        res := p._read_from(.stdout)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, res.len: ${res.len}, res: `${res}`')
        }
        return res
}

// stderr_read reads a block of data, from the stderr pipe of the child process. It will block, if there is no data to be read.
// Call .is_pending() to check if there is data to be read, if you do not want to block.
pub fn (mut p Process) stderr_read() string {
        p._check_redirection_call(@METHOD)
        res := p._read_from(.stderr)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, res.len: ${res.len}, res: `${res}`')
        }
        return res
}

// pipe_read 从子进程的给定管道读取数据块。
// 如果没有要读取的数据，它将返回“none”，*不阻塞*。
pub fn (mut p Process) pipe_read(pkind ChildProcessPipeKind) ?string {
        p._check_redirection_call(@METHOD)
        if !p._is_pending(pkind) {
                $if trace_process_pipes ? {
                        eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, no pending data')
                }
                return none     // 我怎么记得以前说不需要这东西?????
        }
        res := p._read_from(pkind)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, res.len: ${res.len}, res: `${res}`')
        }
        return res
}

// is_pending 返回是否有数据要从与“pkind”对应的子进程管道中读取。
// For example `if p.is_pending(.stdout) { dump( p.stdout_read() ) }` will not block indefinitely.
pub fn (mut p Process) is_pending(pkind ChildProcessPipeKind) bool {
        p._check_redirection_call(@METHOD)
        res := p._is_pending(pkind)
        $if trace_process_pipes ? {
                eprintln('${@LOCATION}, pid: ${p.pid}, status: ${p.status}, pkind: ${pkind}, res: ${res}')
        }
        return res
}

// _read_from 应仅从.stdout_read/0、.stderr_read-0和.pipe_read/1调用
fn (mut p Process) _read_from(pkind ChildProcessPipeKind) string {
        $if windows {
                s, _ := p.win_read_string(int(pkind), 4096)
                return s
        } $else {
                s, _ := fd_read(p.stdio_fd[pkind], 4096)
                return s
        }
}

// _slurp_from should be called only from stdout_slurp() and stderr_slurp()
fn (mut p Process) _slurp_from(pkind ChildProcessPipeKind) string {
        $if windows {
                return p.win_slurp(int(pkind))
        } $else {
                return fd_slurp(p.stdio_fd[pkind]).join('')
        }
}

// _write_to should be called only from stdin_write()
fn (mut p Process) _write_to(pkind ChildProcessPipeKind, s string) {
        $if windows {
                p.win_write_string(int(pkind), s)
        } $else {
                fd_write(p.stdio_fd[pkind], s)
        }
}

// _is_pending should be called only from is_pending()
fn (mut p Process) _is_pending(pkind ChildProcessPipeKind) bool {
        $if windows {
                // TODO
        } $else {
                return fd_is_pending(p.stdio_fd[pkind])
        }
        return false
}

// _check_redirection_call - should be called just by stdxxx methods
fn (mut p Process) _check_redirection_call(fn_name string) {
        if !p.use_stdio_ctl {
                panic('Call p.set_redirect_stdio() before calling p.${fn_name}')
        }
        if p.status == .not_started {
                panic('Call p.${fn_name}() after you have called p.run()')
        }
}

// _signal_stop - should not be called directly, except by p.signal_stop
fn (mut p Process) _signal_stop() {
        $if windows {
                p.win_stop_process()
        } $else {
                p.unix_stop_process()
        }
}

// _signal_continue - should not be called directly, just by p.signal_continue
fn (mut p Process) _signal_continue() {
        $if windows {
                p.win_resume_process()
        } $else {
                p.unix_resume_process()
        }
}

// _signal_kill - should not be called directly, except by p.signal_kill
fn (mut p Process) _signal_kill() {
        $if windows {
                p.win_kill_process()
        } $else {
                p.unix_kill_process()
        }
}

// _signal_term - should not be called directly, except by p.signal_term
fn (mut p Process) _signal_term() {
        $if windows {
                p.win_term_process()
        } $else {
                p.unix_term_process()
        }
}

// _signal_pgkill - should not be called directly, except by p.signal_pgkill
fn (mut p Process) _signal_pgkill() {
        $if windows {
                p.win_kill_pgroup()
        } $else {
                p.unix_kill_pgroup()
        }
}

// _wait - should not be called directly, except by p.wait()
fn (mut p Process) _wait() {
        $if windows {
                p.win_wait()
        } $else {
                p.unix_wait()
        }
}

// _is_alive - should not be called directly, except by p.is_alive()
fn (mut p Process) _is_alive() bool {
        $if windows {
                return p.win_is_alive()
        } $else {
                return p.unix_is_alive()
        }
}

// run - starts the new process
pub fn (mut p Process) run() {
        if p.status != .not_started {
                return
        }
        p._spawn()
}


