module main

import readline { read_line }
import os
import cmd { options, set_options, CmdOption }
import net

fn main() {

	false_log := '\033[31m[false] \033[0m'
	true_log := '\033[32m[true] \033[0m'
	warn_log := '\033[33m[true] \033[0m'
	version := 'v0.0.1'
	args := os.args

	long_options := [
		CmdOption{
			abbr: '-h'
			full: '--help'
			vari: ''
			default: ''
			desc: 'display this help and exit.'
		}
		CmdOption{
			abbr: '-e'
			full: '--exec'
			vari: '[shell]'
			default: 'false'
			desc: 'program to exec after connect.'
		}
		CmdOption{
			abbr: '-p'
			full: '--port'
			vari: '[int]'
			default: 'false'
			desc: 'set local port number.'
		}
		CmdOption{
			abbr: '-lp'
			full: '--listen_port'
			vari: '[int]'
			default: 'false'
			desc: 'listen the local port number.'
		}
		CmdOption{
			abbr: '-klp'
			full: '--keep_listen_port'
			vari: '[int]'
			default: 'false'
			desc: 'keep to listen the local port number.'
		}
	]
	
	if set_options(args, long_options[0]) {
		help(long_options, version)
		exit(1)	
	}
                 
	if os.args.len < 3 {
                println('${false_log}请至少添加addr与port\n 例如:nc 127.0.0.1 12345')
        	exit(1)
	}
	
	addr := args[1]
	port := args[2]
	
 	/*       
	default := true
	for v in 2..5 {
		if options(args, long_options[v])
	}
	*/
        
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

// (socket)load data.
fn load_data(mut socket net.TcpConn) {
	for {
		data := socket.read_line()
        	print(data)
	}
}

// close the socket.
fn for_free(data string, mut socket net.TcpConn) {
        println(data)
        unsafe{
                data.free()
        }
        socket.close() or { panic(err) }
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




