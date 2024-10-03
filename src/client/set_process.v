module client

import io
import log
import os { new_process, flush, Process }
import net { TcpConn }
//import time

// print to client.
fn socket_print(data string, mut socket TcpConn) {
	socket.write_string(data) or {
		println('${log.warn_log}close the socket.')
		exit(1)
	}
}

// set a spawn to print out or error. 
fn return_process(mut p Process, mut reader &io.BufferedReader) {
	for p.is_alive() {
		received_line := reader.read_line() or { '' }
		p.stdin_write( received_line + '\n' )
	}
}

// make a new_process socket to client.
fn set_process(exec string, mut socket TcpConn) {
	mut p := os.new_process( exec )
	//p.set_args(['2>&1'])
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
			socket_print(out, mut socket)
		}
		if p.is_pending(.stderr) {
			flush()
			err := p.stderr_read()
			socket_print(err, mut socket)
		}
	}
	
	p.close()
	p.wait()
	socket.close() or { exit(1) }
}
