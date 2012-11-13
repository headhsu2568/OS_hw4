#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
    int fd[2];
    pipe(fd);

    int old_stdout = dup(STDOUT_FILENO);
    dup2(fd[1], STDOUT_FILENO);
    system("ps aux | grep -E 'use_signal$' | awk '{ print $2}'");
    close(fd[1]);

    unsigned int len = 10;
    char buffer[10];
    read(fd[0], buffer, len);
    close(fd[0]);

    dup2(old_stdout, STDOUT_FILENO);

    int pid = atoi(buffer);
    printf("'use_signal' pid: %d\n", pid);

    printf("call 'sys_use_signal' syscall\n");
    int ret = syscall(316, pid);

    printf("'use_signal' program may receive a signal from kernel\n");
	return 0;
}
