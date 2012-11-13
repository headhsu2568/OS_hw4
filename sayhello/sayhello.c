#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>

int main() {
	int ret = syscall(312);
	printf("ret: %d\n", ret);
	return 0;
}
