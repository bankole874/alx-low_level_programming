#include "main.h"

/**
 * _abs - computes the absolute of an integer.
 *
 * @int: the character
 * Return: Always 0 (Success)
 */

int _abs(int t)
{
	if (t < 0)
	{
		return (-t);
	}
	else if (t > 0)
	{
		return (t);
	}
	else
		return (0);
}
