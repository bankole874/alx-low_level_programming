#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: input character
 * @s2: input character
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (c == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		c = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (c);
}
