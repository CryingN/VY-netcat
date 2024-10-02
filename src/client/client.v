module client

import net
import io
import readline { Readline }
import log

pub fn set_sever(port string, keep bool) {
	
	mut server := net.listen_tcp(.ip6, ':' + port) or {
		println('${log.false_log}The port: ${port} listening failed.')
                exit(1)
	}
        
        // 当监听到外部tcp连接请求时构建一个socket, 创建子进程信息交换.

        if keep {
                for {
                        mut socket := server.accept() or { exit(1) }
                        spawn handle_client(mut socket)
                        spawn send_message(mut socket)
                }
        }
        else {
                mut socket := server.accept() or { exit(1) }
                spawn handle_client(mut socket)
                send_message(mut socket)
        }
}

// listen
fn handle_client(mut socket net.TcpConn) {
	// defer为退出函数, 关闭socket或汇报错误.
        defer {
                socket.close() or { exit(1) }
        }
        // 通过socket读取客户端发送信息
        mut reader := io.new_buffered_reader(reader: socket)
        // 退出时释放读取的文件
        defer {
                unsafe {
                        reader.free()
                }
        }
        // socket向服务端写入字符
        for {
                // 对信息进行处理
                received_line := reader.read_line() or { '' }
		println('${received_line}')
        }
}


// keep to send messages.
pub fn send_message(mut socket net.TcpConn) {
        mut data := 'test' 
	
	mut line := Readline{ skip_empty : true }

        for {
                data = line.read_line('') or { return }
                
                /*******************************
                 * warning:
                 * 这里被写死了
                 * 我希望有方法能让代码交叉编译
                 * 但是现在无法解决
                 * 
                 * when use os.inupt() not readline.read_line(), 
                 * we shouldn't add '\n' for linux.
                *******************************/

                $if linux {
                        data += '\n'
                }

                if data == ':q\r\n' || data == ':q\n' {
		        data = '${log.true_log}closing the socket...'
		        for_free(data, mut socket)
	                exit(1)
                }
                // close the socket

	        defer {
        	        println('${log.true_log}close the socket.')
        	        for_free(data, mut socket)
                }
                                
	        socket.write_string('${data}') or {
        	        println('${log.warn_log}close the socket.')
			exit(1)
		}
        }
}


// close the socket.

pub fn for_free(data string, mut socket net.TcpConn) {
	println(data)
        unsafe{
                data.free()
        }
        // socket.close() or { exit(1) }
        exit(1)
}


