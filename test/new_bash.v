module main

//import readline { read_line }
//import net
import os { user_os, new_process }

fn main() {
	mut p := new_process('./run')
	p.run()
	p.set_redirect_stdio()
	
	if p.is_pending(.stdout) { 
		dump( p.stdout_read() ) 
	}
	//p.wait()
	if p.is_pending(.stdin) { 
		p.stdin_write('aaa') 
	}
	//data := p.pipe_read(.stdin) or { '' }
	//println(data)

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
