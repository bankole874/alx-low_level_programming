#include <stdio.h>

/**
 * main - print_comb5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a + b < c + d && a <= c && b <= d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if (a == 57 && b == 56 && c == 57 && d == 57)
						{
						break;
						}
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

