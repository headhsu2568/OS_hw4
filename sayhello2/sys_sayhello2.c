#include <asm/uaccess.h>
#include <linux/kernel.h>
#include <linux/string.h>

#define BUF_SIZE 1000

asmlinkage long sys_sayhello2(char *ptr) {

    char name[BUF_SIZE];
    char buf[BUF_SIZE];
    unsigned long len;
    memset(name, 0, BUF_SIZE);
    memset(buf, 0, BUF_SIZE);
    
    len = strlen(ptr);
    if(copy_from_user(name, ptr, len)) {
        return -EFAULT;
    }
    printk(KERN_DEBUG "syscall get name: %s\n", name);

    snprintf(buf, BUF_SIZE, "Hello, %s !", name);
    if(copy_to_user(ptr, buf, strlen(buf))) {
        return -EFAULT;
    }
    printk(KERN_DEBUG "%s\n", buf);

    return 0;
}

