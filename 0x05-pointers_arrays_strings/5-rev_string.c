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

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 1; i <= count; i++)
	{
		printf("%c", s[count - i]);
	}
	_putchar('\n');
}
