#include <stdio.h>
#include <unistd.h>
#include "itoa.h"

int main()
{
	int i = 0;
	char buf[16];

	while (1)
	{
		i++;
		if (sleep(1))
			break; 
		itoa(i, buf, 10);
		puts(buf);
	}
	return 0;
}
