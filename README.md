OS_hw4
======

__NCTU Introduction of Operating System course (2012 Fall) homework 4 (instructor:Hank Wu)__
<br /><br /><br />
There are some examples for the homework 4 in this repository, they are...

## [sayhello](https://github.com/headhsu2568/OS_hw4/tree/master/sayhello)
The first example to show how to write a system call and how to call it.<br />
<br />
You should put 'sys_sayhello.c' to the kernel source code directory and make a new kernel.<br />
Use 'make' command can help you compile the user space program 'sayhello.c'.<br />
Use 'make run' will compile 'sayhello.c' and then run it.<br />
<br />

## [sayhello2](https://github.com/headhsu2568/OS_hw4/tree/master/sayhello2)
This example will show how to use 'copy_to_user' and 'copy_from_user' in the system call 'sys_sayhello2.c'<br />
<br />
Same as exapmle 1, you should put 'sys_sayhello2.c' to the kernel source code directory and make a new kernel.<br />
Use 'make' command to compile the user space program 'sayhello2.c'.<br />
Use 'make run' will compile 'sayhello2.c' and then run it.<br />
<br />

## [get_state](https://github.com/headhsu2568/OS_hw4/tree/master/get_state)
This example will show how to access 'current' variable in the system call.<br />
The system call 'get_state' will get the user space program state.<br />
<br />
You should put 'sys_get_state.c' to the kernel source code directory and make a new kernel.<br />
Use 'make' command to compile the user space program 'get_state.c'.<br />
Use 'make run' will compile 'get_state.c' and then run it.<br />
<br />

## [get_cr3](https://github.com/headhsu2568/OS_hw4/tree/master/get_cr3)
The other example to show how to access 'current' variable in the system call.<br />
The system call will get the value of [CR3](http://en.wikipedia.org/wiki/Control_register#CR3).<br />
<br />
Put 'sys_get_cr3.c' to the kernel source code directory and make a new kernel.<br />
Use 'make' command to compile the user space program 'get_cr3.c'.<br />
Use 'make run' will compile 'get_cr3.c' and then run it.<br />
<br />

## [use_signal](https://github.com/headhsu2568/OS_hw4/tree/master/use_signal)
The example will show how to use kernel space program(e.g. a system call) to send a signal to user space program.<br />
The first user space program 'use_signal.c' will wait for a signal. When it receives a signal, it will exit after 5 seconds.<br />
The second user space program 'use_signal2.c' will get the pid of 'use_signal' and call the system call in 'sys_use_signal.c'.<br />
The system call 'sys_use_signal.c' will send a signal to the prcoess with its parameter(the pid passed from the caller).<br />
<br />
Put 'sys_use_signal.c' to the kernel source code directory and make a new kernel.<br />
Use 'make' command to compile the user space program 'use_signal.c' and 'use_signal2.c'.<br />
Use 'make run' will compile 'use_signal.c' and 'use_signal2.c', and then run them.<br />
<br />
<br />