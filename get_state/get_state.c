#include <stdio.h>
#include <stdlib.h>
#include <linux/kernel.h>
#include <linux/unistd.h>

int main() {
    long state = -2;

    printf("call syscall 'sys_get_state'\n");
    int ret = syscall(314, &state);

    printf("state code: %ld\n", state);
    if(state == -1) 
        printf("process is unrunnable\n");
    else if(state == 0) 
        printf("process is runnable\n");
    else if(state > 0) 
        printf("process is stopped\n");
    else
        printf("syscall failed\n");

    return 0;
}
