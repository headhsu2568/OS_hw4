#include <linux/kernel.h>
#include <asm/uaccess.h>
#include <asm/siginfo.h>
#include <linux/sched.h>
#include <linux/string.h>

asmlinkage long sys_use_signal(int pid) {

    struct task_struct* task;
    task = find_task_by_vpid(pid);

    /*** make a signal ***/
    struct siginfo info;
    memset(&info, 0, sizeof(struct siginfo));
    info.si_signo = SIGUSR1;
    info.si_code = SI_KERNEL;

    /*** send the signal to current process ***/
    int ret = send_sig_info(SIGUSR1, &info, task);
    if(ret < 0) {
        printk(KERN_WARNING "send_sig_info: error sending signal (ret: %d)\n", ret);
    }
    else {
        printk(KERN_DEBUG "send signal to pid: %d\n", task->pid);
    }

    return 0;
}

