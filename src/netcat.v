// v netcat.v -shared -cc gcc -o netcat.c

module main

import readline { read_line }
import os
import cmd { options, set_options, CmdOption }
import net
import client { set_sever, for_free }

fn main() {

	false_log := '\033[31m[false] \033[0m'
	true_log := '\033[32m[true] \033[0m'
	warn_log := '\033[33m[warn] \033[0m'
	version := 'v0.0.3'


	mut args := os.args.clone()

	// now you can run nc.exe in windows.
	if args.len == 1 {
			mut data := args[0] + ' ' 
			data += read_line('Cmd line:') or { '' }
			args = data.split(' ')
	}

	long_options := [
		CmdOption{
			abbr: '-h'
			full: '--help'
			vari: ''
			defa: ''
			desc: 'display this help and exit.'
		}
		CmdOption{
			abbr: '-e'
			full: '--exec'
			vari: '[shell]'
			defa: 'false'
			desc: 'program to exec after connect.'
		}
		CmdOption{
			abbr: '-lp'
			full: '--listen_port'
			vari: '[int]'
			defa: 'false'
			desc: 'listen the local port number.'
		}
		CmdOption{
			abbr: '-klp'
			full: '--keep_listen_port'
			vari: '[int]'
			defa: 'false'
			desc: 'keep to listen the local port number.'
		}
	]
	
	if set_options(args, long_options[0]) {
		help(long_options, version)
		exit(1)	
	}
                 
	mut connect := true
	for v in 1..4 {

		if options(args, long_options[v]) != 'false' {
			connect = false
			if long_options[v].abbr == '-e' {
				println('${warn_log}这里好麻烦哦')
			}
			if long_options[v].abbr == '-lp' {
				set_sever(options(args, long_options[v]))
			}
			if long_options[v].abbr == '-klp' {
				
			}
		}
	}

	if connect {	
		if args.len < 3 {
				println('${false_log}Please refer to the help for use.')
                help(long_options, version)
                exit(1)
        }

		addr := args[1]
		port := args[2]
        	
		mut socket := net.dial_tcp(addr+':'+port) or {
        		println('${false_log}${addr}:${port} not found.')
        		exit(1)
        	}
        	
		spawn load_data(mut socket)
        	
		mut data := 'test'
		for{
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
        	
			socket.write_string('${data}\n') or { return }
		}
	}
}

// (socket)load data.
pub fn load_data(mut socket net.TcpConn) {
	for {
		data := socket.read_line()
        	print(data)
	}
}



// -h or --help
fn help(long_options []CmdOption, version string) {
	mut data := 'VY netcat ${version}, the network tools suitable for CTF.\nBasic usages:\n connect to somewhere:	nc [addr] [port]\n listen to somewhere:	nc -lp [port]\n keep to listen:		nc -klp [port]\nCmdOptions:'
	println(data)
	for v in long_options {
		data = ' ${v.abbr}, ${v.full} ${v.vari}'
		data_len := data.len
		for _ in 0..(5 - (data_len / 8)) {
			data += '\t'
		}
		if (data_len % 8) == 0 {
			data += '\t'
		}
		data += '${v.desc}'
		println(data)
	}
}



