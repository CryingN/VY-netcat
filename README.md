<div align="center" style="display:grid;place-items:center;">
<p>
    <a href="https://github.com/Cryingn/VY-netcat" target="_blank"><img width="180" src="./image/VY-netcat.png" alt="VY-netcat logo"></a>
<h1>VY-netcat</h1>
</p>
</div>

# Language

[中文](./README_CN.md)|English

# Introduction
VY-netcat is a network tool written in the [vlang](https://vlang.io/) language, primarily used for setting up CTF challenge environments. It will be integrated into the [VTF competition platform](https://gitee.com/cryingn/vtf). Compared to other similar tools, it mainly focuses on the following optimizations:

* [gnu-netcat](https://netcat.sourceforge.net/): Solves the issue of not being able to maintain the connection after listening ends.
* [openbsd-netcat](https://man.openbsd.org/nc.1): Addresses the issue of sending commands for execution.

# Development Status

| Requirement    |	Status  |   Developer |
|:----:|:----:|:----------:|
|   Help Menu  |	Solved  |   sudopacman  |
|   Basic Connection	|   Solved	|   sudopacman  |
|   GCC Compilation Support    |	Solved  |	sudopacman  |
|   Cross-Compilation	|   Bug (module client) |   |	
|   Windows Compatibility   |	Minimal |	sudopacman  |
|   Socket Crash Issue  |	Unsolved    |   |	
|   Command Execution   |	Unsolved	|
|   Listen on Port  |	Solved  |	sudopacman  |
|   Keep Listening	|    Solved	|   sudopacman  |

# Usage

You can directly use our compiled binary files, or compile them yourself using vlang or gcc. For detailed configuration methods of [vlang](https://vlang.io/), refer to [vdoc](https://gitee.com/sakana_ctf/vdoc).

## Direct Download

```bash
wget https://github.com/CryingN/VY-netcat/releases/download/[version]]/nc
./nc -h
```

## Compile Yourself

### Linux

Detailed compilation rules are written in the makefile. The system defaults to compiling with vlang, and automatically switches to gcc if vlang compilation fails.

```bash
git clone https://github.com/cryingn/vy-netcat.git  
cd VY-netcat  
make  
cd bin  
./nc -h
```

### Windows

**VY-netcat** minimally supports usage in a Windows environment. Considering the inconvenience of using make, a separate **make.bat** file is provided for compilation:

```shell
git clone https://github.com/cryingn/vy-netcat.git  
cd VY-netcat  
./make  
cd bin  
./nc -h
```

# Help

Below is the description from the `help` menu.

```bash
[root_cn@archlinux vy-netcat]$ ./nc -h  
VY netcat v0.1.1, the network tools suitable for CTF.  
Basic usages:  
 connect to somewhere:  nc [addr] [port]  
 listen to somewhere:   nc -lp [port]  
 keep to listen:                nc -klp [port]  
CmdOptions:  
 -h, --help                            display this help and exit.  
 -e, --exec [shell]                    program to exec after connect.  
 -lp, --listen_port [int]              listen the local port number.  
 -klp, --keep_listen_port [int]        keep to listen the local port number.
```

# Contributing
We recommend contributing directly in vlang. Before submitting, please ensure that the files have been compiled to C (in a Linux environment). We provide a convenient method for checking:

```bash
make c
```

If there is no warning message like: 

```bash
[warn] Unable to make to src/netcat.c
```

it means the vlang files have been successfully compiled to C.

# VY License Explanation
Without personal additions, the VY license is also known as the VY General License. For public use, simply annotate the VYCMa logo or declare that the source code is from VYCMa, and you can freely modify and use the materials for commercial purposes.

Regarding distribution, to facilitate understanding, the concept of "copyright transfer" is redefined in the VY license: After modifying the source code, others can close the source. Each modified file must include a copyright notice. If it is to be publicly displayed, the author's personal logo must be annotated. If the author has no special instructions, the VYCMa logo (VYCMa.png) or a declaration that the source code is from VYCMa must be included.

![](./image/VYCMa.png)
