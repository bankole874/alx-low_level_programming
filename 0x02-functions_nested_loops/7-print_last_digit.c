#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: last digit
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	l = n % 10;
	if (l > 0)
	{
		_putchar(l + 48);
		return(l);
	}
	else if  (l < 0)
	{
		_putchar(-l + 48);
		return(-l);
	}
	return (0);
}
