#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input character
 * Return: no
 */

void rev_string(char *s)
{
	int count = 0;
	int i;
	char r = s[0];

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		c--;
		r = s[i];
		s[i] = s[count];
		s[c] = r;
	}
}
