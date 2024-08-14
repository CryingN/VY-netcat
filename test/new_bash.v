module main

//import readline { read_line }
import net
import os { user_os, new_process }

fn main() {
	/*
	port := '12321'
	mut server := net.listen_tcp(.ip6, ':' + port) or {
		println('\033[31m[false] \033[0mThe port: ${port} listening failed.')
        exit(1)
	}
	mut socket := server.accept() or { exit(1) }
	*/
	//println(socket.read_ptr()!)
	
	mut p := new_process('/bin/sh')
	//p.pipe_read(.stdout)
	//p.set_redirect_stdio()
	p.run()
	//p.stdin_write('ls\n')
	//if p.is_pending(.stdin) {
		
	//}
/*
	if p.is_pending(.stdout) {
		p.stdout_read()
	}
*/	


	//p.stdin_write('ls')	
	
	/*
	os.exec('/bin/neofetch')
	read_line()

	data := p.stdout_slurp()
	p.close()
	print(data)
	//socket.write_string(data) or { exit(1) }
	*/
	
}
