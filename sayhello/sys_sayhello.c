#include <linux/kernel.h>

asmlinkage long sys_sayhello(void) {
	printk(KERN_DEBUG "Hello !\n");
	return 0;
}
