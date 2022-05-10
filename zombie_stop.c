#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler (int signal)
{
	wait(0);
}

int main (void)
{
	signal(SIGCHLD, &sighandler);
	pid_t pid = fork();
	if (pid == 0) {
		fprintf(stdout,"Child of Shkuropatova is finished\n");
		_exit(0);
	}
	else {
		fprintf(stdout,"the parent start ...\n");
		sleep(18);
		fprintf(stdout,"the parent finish ...\n");
	}
	return EXIT_SUCCESS;
}
