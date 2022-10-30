#include "main.h"

/**
 * _strcat - string concatenation,
 * @dest: destination
 * @src: input character
 * return: return strings or combination of characters
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b >= 0)
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