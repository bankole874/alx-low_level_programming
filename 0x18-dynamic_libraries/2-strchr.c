#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer s
 * @c: character to be located
 * Return: remaining character
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for ( ; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
