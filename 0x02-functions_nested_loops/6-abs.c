#include "main.h"

/**
 * _abs - computes the absolute of an integer.
 *
 * @int: the character
 * Return: Always 0 (Success)
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * (-1));
	}
	else if (r > 0)
	{
		return (r);
	}
	else
		return (0);
}
