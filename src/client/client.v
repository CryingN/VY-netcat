module client

import readline { read_line }
import net
import io

pub fn set_sever(port string) {
	true_log := '\033[32m[true] \033[0m'

	mut server := net.listen_tcp(.ip6, ':' + port) or {
		println('\033[31m[false] \033[0mThe port: ${port} listening failed.')
        exit(1)
	}
    // 当监听到外部tcp连接请求时构建一个socket, 创建子进程信息交换.
	mut data := 'test'

    for {
		mut socket := server.accept() or { panic(err) }	
		spawn handle_client(mut socket)
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
        	
			socket.write_string('${data}\n') or { return }
		}
	}
}

// listen
fn handle_client(mut  socket net.TcpConn) {
	// defer为退出函数, 关闭socket或汇报错误.
        defer {
                socket.close() or { panic(err) }
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
                received_line := reader.read_line() or { return }
                if received_line == '' {
                        return
                }
				println('${received_line}')
        }
}

// close the socket.
pub fn for_free(data string, mut socket net.TcpConn) {
        println(data)
        unsafe{
                data.free()
        }
        socket.close() or { panic(err) }
}


