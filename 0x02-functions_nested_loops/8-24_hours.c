#include "main.h"

/**
 * Jack_bauer - print time
 *
 *
 */

void jack_bauer(void)
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
					if (a < 51 && b < 52 && c < 54 && d < 58)
					{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					if (a == 50 && b == 51 && c == 53 && d == 57)
					{
						break;
					}
					_putchar(',');
					_putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
}
