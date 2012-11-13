#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <linux/kernel.h>
#include <linux/unistd.h>

#define BUF_SIZE 1000

int main() {
    char buf[BUF_SIZE];
    char buf2[BUF_SIZE];
    memset(buf, 0, BUF_SIZE);
    strcpy(buf, "student");
    printf("name: %s\n", buf, strlen(buf));

    int ret = syscall(313, buf);
    printf("kernel say: %s\n", buf, ret);
    return 0;
}
