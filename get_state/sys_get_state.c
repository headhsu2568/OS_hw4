#include <asm/uaccess.h>
#include <linux/kernel.h>
#include <linux/sched.h>

asmlinkage long sys_get_state(long* dst) {

    long state = current->state;
    printk(KERN_DEBUG "get state: %ld\n", state);

    if(copy_to_user(dst, &state, sizeof(state))) {
        return -EFAULT;
    }

    return 0;
}

