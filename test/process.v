module os

//-ProcessState.not_started-进程尚未启动

//-ProcessState.running-进程当前正在运行

//-ProcessState.stop-进程正在运行，但暂时停止

//-ProcessState.exited-进程已完成/退出

//-ProcessState.aborted-进程被信号终止

//ProcessState.closed-进程资源（如打开的文件描述符）被释放/丢弃，最终状态。

pub enum ProcessState {
        not_started
        running
        stopped
        exited
        aborted
        closed
}

@[heap]
pub struct Process {
pub mut:
        filename         string       // 进程的命令文件路径
        pid              int          // 进程的PID
        code             int = -1 // 进程的退出代码，！=-1*仅*当状态为.退出*且*进程未中止时
        status           ProcessState = .not_started // 进程的当前状态
        err              string       // 如果流程失败，请说明原因
        args             []string     // 命令所接受的参数
        work_folder      string       // 进程的初始工作文件夹。使用''时，重复使用与父进程相同的文件夹。
        env_is_custom    bool     // true，当使用.set_environment对环境进行自定义时
        env              []string // 启动流程的环境  (list of 'var=val')
        use_stdio_ctl    bool     // 如果为true，则可以使用p.stdin_write()、p.stdout_slurp()和p.stderr_slurp()
        use_pgroup       bool     // 如果为true，则流程将创建一个新的流程组，从而启用 .signal_pgkill()
        stdio_fd         [3]int   // 子进程的stdio文件描述符，仅由nix实现使用
        wdata            voidptr  // WProcess；仅由windows实现使用
        create_no_window bool     // 设置一个值，指示是否在新窗口中启动进程，默认值为false；仅由windows实现使用
}

// new_process - create a new process descriptor
// Note: new does NOT start the new process.
// That is done because you may want to customize it first,
// by calling different set_ methods on it.
// In order to start it, call p.run() or p.wait()
pub fn new_process(filename string) &Process {
        return &Process{
                filename: filename
                stdio_fd: [-1, -1, -1]!
        }
}

// set_args - set the arguments for the new process
pub fn (mut p Process) set_args(pargs []string) {
        if p.status != .not_started {
                return
        }
        p.args = pargs
        return
}

// set_work_folder - 为新进程设置初始工作文件夹
// If you do not set it, it will reuse the current working folder of the parent process.
pub fn (mut p Process) set_work_folder(path string) {
        if p.status != .not_started {
                return
        }
        p.work_folder = real_path(path)
        return
}

// set_environment - 为新流程设置自定义环境变量映射
pub fn (mut p Process) set_environment(envs map[string]string) {
        if p.status != .not_started {
                return
        }
        p.env_is_custom = true
        p.env = []string{}
        for k, v in envs {
                p.env << '${k}=${v}'
        }
        return
}