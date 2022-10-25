#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input character
 * Return: no
 */

void print_rev(char *s)
{
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 1; i <= count; i++)
	{
		_putchar(s[count - i]);
	}
}
