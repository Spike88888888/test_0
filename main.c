#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define TAG		"\n [TEST_0] "


void sigHandler(int sig)
{
	printf(TAG "\n\n Kill signal detected, exiting process. \n\n");

	exit(0);
}

int main (int argc, char *argv[])
{
	// (1) Inside test_0 program
	printf(TAG "Hello World.\n");

	// (2) register a signal
	signal(SIGINT, sigHandler);

	// (2-a)
	printf(TAG "Just randomly add a sanity step.\n");

	// (3) try while loop
	int counter = 0;
	while (1)
	{
		printf(TAG "Ticking forever #%d", ++counter);
		usleep(1000000);		
	}

	return 0;
}










