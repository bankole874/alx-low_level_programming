#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @l: last digit
 * Return: Always 0 (Success)
 */

int print_last_digit(int l)
{
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
