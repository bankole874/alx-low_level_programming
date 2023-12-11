#include "main.h"

/**
 * _strncat - concatenate and store strings
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
		{
			break;
		}
		a++;
		b++;
	}
	return (dest);
}
