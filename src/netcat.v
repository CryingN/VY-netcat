// v netcat.v -shared -cc gcc -o netcat.c

module main

import os
import cmd { options, set_options, find_options, CmdOption }
import net
import client { SetServer, set_server, send_message }
import log

fn main() {
	version := 'v1.1.0'

	long_options := [
		CmdOption{
			abbr: '-h'
			full: '--help'
			vari: ''
			defa: ''
			desc: 'display this help and exit.'
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
		CmdOption{
			abbr: '-e'
			full: '--exec'
			vari: '[shell]'
			defa: ''
			desc: 'program to exec after connect.'
		}
		CmdOption{
			abbr: '-s'
			full: '--security'
			vari: '{0, 1}'
			defa: '0'
			desc: 'set the security mode.' 
		}
	]

	mut args := os.args.clone()

	// now you can run nc.exe in windows.
	if args.len == 1 {
			mut arg := args[0] + ' '
			help(long_options, version)
			arg += os.input('\033[36mCmd line: \033[0m')
			args = arg.split(' ')
	}
	
	if set_options(args, long_options[0]) {
		help(long_options, version)
		exit(1)	
	}
                 
	mut connect := true
	mut s := SetServer{ 
		exec	:	find_options(args, long_options, '-e')
		security:	find_options(args, long_options, '-s')
		port	:	''
		keep	:	false
	}
	
	for v in 1..3 {
		if options(args, long_options[v]) != 'false' {
			connect = false

			if long_options[v].abbr == '-lp' {
				s.port = options(args, long_options[v])
			} else if long_options[v].abbr == '-klp' {
				/**********************************
				 * statement:
				 * keep_listen_port会创建多个子进程
				 * 同时监听多个程序时发信会混乱
				 * 这里用于配合execute实现多环境访问
				***********************************/
				s.port = options(args, long_options[v])
				s.keep = true
			}
		}
	}
	
	// 连接部分
	if connect {
		mut connect_addr := ''

		if args[1].index(':') != none {
			connect_addr = args[1]
		} else if args.len < 3 {
			println('${log.false_log}Please refer to the help for use.')
            help(long_options, version)
            exit(1)
        } else {
			connect_addr = args[1] + ':' + args[2]
		}

		mut socket := net.dial_tcp(connect_addr) or {
        		println('${log.false_log}${connect_addr} not found.')
        		exit(1)
        	}
        
		spawn load_data(mut socket)
		send_message(mut socket)
	} else {
		set_server( s )
	}
}

// (socket)load data.
fn load_data(mut socket net.TcpConn) {
	for {
		data := socket.read_line()
        	print(data)
	}
}



// -h or --help
fn help(long_options []CmdOption, version string) {
	mut data := 'VY-netcat ${version}, the network tools suitable for CTF.'
	data += '\nBasic usages:'
	data += '\n connect to somewhere:\tnc [addr] [port]'
	data += '\n \t\t\tnc [addr]:[port]'
	data += '\n listen to somewhere:\tnc -lp [port]'
	data += '\n keep to listen:\tnc -klp [port]'
	data += '\nCmdOptions:'
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



