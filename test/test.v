module main

import os

fn main() {
	mut data := 'neko'
	help()
	data += os.input('Cmd line:')
	print(data)
}

fn help() {
	mut data := 'VY netcat version, the network tools suitable for CTF.'
	data += '\nBasic usages:'
	data += '\n connect to somewhere:\tnc [addr] [port]'
	data += '\n \t\t\tnc [addr]:[port]'
	data += '\n listen to somewhere:\tnc -lp [port]'
	data += '\n keep to listen:\tnc -klp [port]'
	data += '\nCmdOptions:'
	println(data)
	
}

