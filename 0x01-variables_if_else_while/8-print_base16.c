#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char c;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
