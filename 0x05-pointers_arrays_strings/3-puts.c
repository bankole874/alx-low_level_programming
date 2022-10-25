#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: input character
 */

void _puts(char *str)
{
	int count = 0;

	while (str[count] >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		count++;
	}
	_putchar(str[count]);

	return (0);
}
