#include <stdio.h>
#include <stdlib.h>
#include <linux/kernel.h>
#include <linux/unistd.h>

int main() {
    unsigned long cr3 = 0;

    printf("call syscall 'sys_get_cr3'\n");
    int ret = syscall(315, &cr3);
    printf("the CR3 value: 0x%lx\n", cr3);

    return 0;
}
