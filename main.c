#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define TAG		"\n [TEST_0] "


void sigHandler(int sig)
{
	printf(TAG "\n\n Kill signal detected, shutting down process. \n\n");

	exit(0);
}

int main (int argc, char *argv[])
{
	// (1) Inside test_0 program
	printf(TAG "Hello World.\n");

	// (2) register a signal
	signal(SIGINT, sigHandler);

	// (3) try while loop
	int counter = 0;
	while (1)
	{
		printf(TAG "Ticking tick #%d", ++counter);
		usleep(1000000);		
	}

	return 0;
}










