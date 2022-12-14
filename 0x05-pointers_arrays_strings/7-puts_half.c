#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: input character
 * Return: no return
 */

void puts_half(char *str)
{
	int b = 0;
	int count = 0;
	int i;

	for (; str[b] != '\0'; b++)
	{
		count++;
	}

	if ((count % 2) == 0)
	{
		i = count / 2;

		for (; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((count % 2) == 1)
	{
		i = ((count - 1) / 2) + 1;

		for (; i < count; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
