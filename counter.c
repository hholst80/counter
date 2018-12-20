#include <stdio.h>
#include <unistd.h>

int main()
{
	int i = 0;

	while (1)
	{
		printf("%d\n", i++);
		if (sleep(1))
			break; 
	}
	return 0;
}
