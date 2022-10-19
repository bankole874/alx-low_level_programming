#include "main.h"

/**
 * _islower - checks for lower case character.
 * @c: the character
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
