#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <linux/kernel.h>
#include <linux/unistd.h>

#define CMDLINE_LEN 1024

int main() {

    // Use 'ps aux' show the original command line string
    printf("Use 'ps aux |grep change_cmdline' and capture the snapshot.\n");
    printf("Press any key to continue...\n");
    fgetc(stdin);

    char origin_cmdline[CMDLINE_LEN];

    /***
     * call your system call below
     *
     ***/


    /***
     * print the original command line string below
     *
     ***/

    // Use 'ps aux' show the new command line string
    printf("Use 'ps aux |grep [the pid]' and capture the snapshot again.\n");
    printf("Press any key to continue...\n");
    fgetc(stdin);
    return 0;
}
