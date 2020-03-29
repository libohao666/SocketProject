# SocketProject

```bash
.
├── client
│   └── client.c
├── common
│   ├── common.c
│   ├── common.h
│   ├── head.h
│   ├── tcp_client.c
│   ├── tcp_client.h
│   ├── tcp_server.c
│   ├── tcp_server.c.c
│   └── tcp_server.h
├── gc
├── gitpush
├── gs
├── README.md
└── server
    └── server.c
```



步骤：

1.server.c	client.c	拷贝到common

改名tcp_***

头文件提到tcp_server.h	tcp_client.h

2.server/server.c	client/client.c

3.创建编译、提交脚本

4.fd更为结构体数组下标



直接设置O_NONBLOCK会覆盖读写等其他属性 

