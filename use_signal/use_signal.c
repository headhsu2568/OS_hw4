#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void receiveData(int n, siginfo_t *info, void* unused) {
    printf("Wakeup by signal: %d from kernel\n", n);
    printf("Process will exit after 5 seconds...\n");

    int i = 5;
    for(i = 5; i > 0; --i) {
        printf("%d\n", i);
        sleep(1);
    }
}

int main() {

    /*** regist a signal handler ***/
    struct sigaction sig;
    sig.sa_sigaction = receiveData;
    sig.sa_flags = SA_SIGINFO;
    sigaction(SIGUSR1, &sig, NULL);

    printf("Start to wait a signal...\n");

    sleep(600);
	return 0;
}
