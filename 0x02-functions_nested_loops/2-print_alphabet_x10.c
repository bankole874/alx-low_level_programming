#include "main.h"

/**
 * 10 x alphabet
 */

void print_alphabet_x10(void)
{
	int a;
	int b;
	b = 0;
	do{
		for (a = 97; a < 123; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}while (b < 10);
}
