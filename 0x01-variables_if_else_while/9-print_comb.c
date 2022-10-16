#include <stdio.h>

/**
 * main - print combination
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
