#include "main.h"

/**
 * power_operation - returns the
 * int power_operation(int n, int c)
 * @n: input n
 * @c: input c
 * Return: int;
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: input int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
