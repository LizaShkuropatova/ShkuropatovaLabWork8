#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static void sig_usr(int signo)
{
	if(signo == SIGUSR2)
		printf("Process of Shkuropatova got signal\n");
}

int main(void)
{
	printf("My PID = %d\n",getpid());
	for( ; ; )
		pause();
	return EXIT_SUCCESS;
}
