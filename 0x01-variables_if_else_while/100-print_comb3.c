#include <stdlib.h>
#include <stdio.h>

/**
 * main - print_comb3
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	char b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
