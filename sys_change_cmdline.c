#include <asm/uaccess.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/string.h>

#define CMDLINE_LEN 1024

asmlinkage long sys_change_cmdline(char* ptr) {

    char *new_cmdline = "[your name] [your student id]";
    char *origin_cmline;

    /*** 
     * get the command line string via variable 'current' below
     *
     ***/


    /*** 
     * copy the original command line string to user space variable(the address is 'ptr') below
     *
     ***/


    /*** 
     * modify the command line string below
     *
     ***/

    return 0;
}

