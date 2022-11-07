#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer s
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (1 + (s + 1));
	}
	else
	{
		return (0);
	}
}
