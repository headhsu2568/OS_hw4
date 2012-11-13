#include <asm/uaccess.h>
#include <linux/kernel.h>
#include <linux/sched.h>

asmlinkage long sys_get_cr3(unsigned long *ptr) {

    unsigned long cr3;

    /*** get CR3 value of the current process ***/
    cr3 = current->mm->pgd->pgd;
    printk(KERN_DEBUG "get CR3 value: 0x%lx\n", cr3);

    /*** copy CR3 value to user space buffer ***/
    if(copy_to_user(ptr, &cr3, sizeof(cr3))) {
        return -EFAULT;
    }

    return 0;
}

