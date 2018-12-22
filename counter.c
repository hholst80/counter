#include <stdio.h>
#include <time.h>
#include <signal.h>

void sighandler(int dummy)
{
}

int main()
{
	int i = 0;

	struct timespec timer = { .tv_sec = 1, .tv_nsec = 0 };

	signal(SIGINT, sighandler);

	while (1)
	{
		printf("%d\n", i++);
		fflush(stdout);
		if (nanosleep(&timer, NULL)) {
			break; 
		}
	}
	return 0;
}
