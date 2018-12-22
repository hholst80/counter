#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sighandler(int dummy)
{
}

int main()
{
	int i = 0;

	signal(SIGINT, sighandler);

	while (1)
	{
		printf("%d\n", i++);
		if (sleep(1))
			break; 
	}
	return 0;
}
