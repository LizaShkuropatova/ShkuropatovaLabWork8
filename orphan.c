#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
	int i;
	pid_t pid = fork();
	if (pid != 0) {
		sleep(7);
		_exit(0);
	}
	else {
		for (i=0; i<13; i++) {
			printf("Parent of Shkuropatova. My parent pid=%d\n",getppid());
			sleep(1);
		}
	}
	return 0;
}
