module main

import os
import readline { Readline }
import time
import term { red }

fn main() {
	mut data := ''
	exec := '/bin/sh'

	mut p := os.new_process(exec)
	mut line := Readline{ skip_empty : true }

	p.set_redirect_stdio()
	p.run()

	for p.is_alive() {
		os.flush()
		data = line.read_line('[root_cn@virtual]$ ') or { return }
		if data == ':q' {
			break
		}
		
		p.stdin_write( data + '\n' )
	
		time.sleep( 150 * time.millisecond )
		
		if out := p.pipe_read(.stdout) {
			print(out)
		}
		if err := p.pipe_read(.stderr) {
			print(red(err))
		}

	}
	p.close()
	p.wait()
	
}
