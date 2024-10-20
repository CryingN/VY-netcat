module client

import io
import log
import os { new_process, flush, Process }
import net { TcpConn }
//import time

// print to client.
fn socket_print(data string, mut socket TcpConn, mut p Process) {
	socket.write_string(data) or {
		println('${log.warn_log}close the socket.')
		p.close()
		p.wait()
		socket.close() or {
			println('${log.false_log}socket断开连接失败.')
		}
	}
}

// set a spawn to print out or error. 
fn return_process(mut p Process, mut reader &io.BufferedReader) {
	for p.is_alive() {
		received_line := reader.read_line() or { '' }
		//if received_line != 'exit' && received_line.index('E725164') == none {
			p.stdin_write( received_line + '\n' )
		//}
	}
}

// set a process to run.
fn set_process(exec string, mut socket TcpConn, pid int) {
	mut first := exec.split(' ')[0]
	if first.index('./') == none {
		first = os.find_abs_path_of_executable(first) or {
			println( '${log.false_log}未找到执行指令.' )
			exit(1)
		}
	}

	mut p := os.new_process( first )
	p.pid = pid
	p.set_args( exec.split(' ')[1..] )
	
	defer {
		//dump(p.code)
		p.close()
		p.wait()
	}
	mut reader := io.new_buffered_reader(reader: socket)
	
	p.set_redirect_stdio()
	p.run()
	
	spawn return_process( mut p, mut reader )
	
	for p.is_alive() {
		if p.is_pending(.stdout) {
			flush()
			out := p.stdout_read()
			socket_print(out, mut socket, mut p)
		}
		if p.is_pending(.stderr) {
			flush()
			err := p.stderr_read()
			socket_print(err, mut socket, mut p)
		}
	}
	
	p.close()
	p.wait()
	socket.close() or {
		println('${log.false_log}socket断开连接失败.')
	}
}
