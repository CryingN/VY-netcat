# syntax design

The current wiki page is mainly used to standardize the usage of **VY-netcat**.

[中文](./readme_cn.md)|English

## Table of Contents

- [Usage](#usage)
- [Connection](#connection)
- [Parameters](#parameters)
  - [Defined Parameters](#defined-parameters)
    - [Help](#help)
  - [Variable Parameters](#variable-parameters)
    - [Execution](#execution)
    - [Listening](#listening)
    - [Keep Listening](#keep-listening)
    - [Execution](#execution)

## Usage

**VY-netcat** is modeled after the usage of **gnu-netcat** and can be used directly, with further details to be filled in later:

```bash
$ nc
Cmd line: -h
```

Alternatively, parameters can be written into args:

```bash
$ nc -h
```

## Connection

**VY-netcat** supports two types of connections.

```bash
nc [ip] [port]
# nc 127.0.0.1 12345

nc [ip]:[port]
# nc 127.0.0.1:12345
```

## Parameters

The main parameters are:

* [Defined Parameters](#defined-parameters): Only the parameter needs to be specified.
* [Variable Parameters](#variable-parameters): Both the parameter and its variable value need to be specified.

### Defined Parameters

#### Help

`-h`

Displays basic information about **VY-netcat**.

### Variable Parameters

#### Execution

`-e, --exec [shell]`

Executes the specified command; if there is no listening port, it exits directly.

#### Listening

`-lp, --listen_port [int]`

Specifies the listening port; establishes a connection, then exits after communication ends.

#### Keep Listening

`-klp, --keep_listen_port [int]`

Acts as a server for listening; clients can communicate once connected, but the server itself cannot send messages.

If the `-e` execution parameter is also specified, the command specified by `-e` will be executed after a client connects.

#### Security Restrictions

`-s, --security {0, 1}`

- `0`: Default, does not enable security restrictions during execution.
- `1`: Enables security restrictions during execution as follows:
    - Prohibits moving to or accessing other directories.
    - Prohibits the `rm` command.
    - Prohibits the `sudo` command.

#### Maximum connection time limit

`-t, --time_limit [int]`

Specify the maximum connection time limit in seconds.