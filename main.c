#include <stdio.h>
#include <stdlib.h>

#define TAG		"[TEST_0]"


void signHandler(int sig)
{
	printf(TAG "\n\n Kill signal detected, shutting down process. \n\n");
}

int main (int argc, char *argv[])
{
	// (1) Inside test_0 program
	printf(TAG "\n\n Hello World.\n\n");

	// (2) register a signal
	signal(SIGINT, sigHandler);


	return 0;
}










