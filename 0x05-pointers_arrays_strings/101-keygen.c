#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *
 */

int main(void)
{
	int random = 0, count = 0;

	srand(time(NULL));
	while (count < 2772)
	{
		random = rand() % 128;
		if ((count + random) > 2772)
		{
			break;
		}
		count = count + random;
		printf("%c", random);
	}
	printf("%c\n", (2772 - c));

	return (0);
}			
