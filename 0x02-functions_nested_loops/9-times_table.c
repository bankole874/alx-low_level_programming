#include "main.h"

/**
 * times_table - multiplication table 9
 *
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
		}
		_putchar('\n');
	}
}
