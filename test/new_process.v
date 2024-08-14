module main

import readline { read_line }
import net
import io
import os { user_os, new_process }

fn main() {
	mut p := new_process('/bin/sh')
	p.run()
	port := '12321'
	mut server := net.listen_tcp(.ip6, ':' + port) or {
		println('\033[31m[false] \033[0mThe port: ${port} listening failed.')
        exit(1)
	}
	mut socket := server.accept() or { exit(1) }

	//p.stderr_read()
	mut data := 'test' 
    for {
        data = read_line('') or { '' }

        // close the socket
	    if data == ':q' {
		    data = '${true_log}closing the socket...'
		    for_free(data, mut socket)
		    exit(1)
        }

	    defer {
            println('${true_log}close the socket.')
            for_free(data, mut socket)
            }
                
                /*******************************
                 * warning:
                 * 这里被写死了
                 * 我希望有方法能让代码交叉编译
                 * 但是现在无法解决
                *******************************/

	    socket.write_string('${data}\n') or { continue }
    }
}


