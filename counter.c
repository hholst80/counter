#include <stdio.h>
#include <unistd.h>

int main()
{
	int i = 0;
	char buf[16];

	while (1)
	{
		i++;
		if (sleep(1))
			break; 
		printf("%d\n", i);
	}
	return 0;
}
