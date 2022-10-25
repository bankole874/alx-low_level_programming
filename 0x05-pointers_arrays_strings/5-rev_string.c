#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input character
 * Return: no
 */

void rev_string(char *s)
{
	int count = 0;
	int i;
	int j;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = j; j <= count; j++)
	{
		_putchar(s[j]);
	}
	for (i = 1; i <= count; i++)
	{
		_putchar(s[count - i]);
	}
	_putchar('\n');
}
