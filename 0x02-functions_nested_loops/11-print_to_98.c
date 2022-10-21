#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 *
 * @n: input number
 */

void print_to_98(int n)
{
	int c;
	int d;

	if (n < 98)
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d", c);
			if (c != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (d = n; d >= 98; d--)
		{
			printf("%d", d);
			if (d != 98)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
}
