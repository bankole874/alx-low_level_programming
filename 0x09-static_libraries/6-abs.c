#include "main.h"

/**
 * _abs - computes the absolute of an integer.
 *
 * @a: the character
 * Return: Always 0 (Success)
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a > 0)
	{
		return (a);
	}
	else
		return (0);
}
