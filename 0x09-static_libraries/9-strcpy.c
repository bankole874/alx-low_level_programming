#include "main.h"

/**
 * _strcpy - that copies the string pointed to by src
 * @dest: input character dest
 * @src: input character src
 * Return: pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int str_len = 0;

	while (*(src + str_len) != '\0')
	{
		*(dest + str_len) = *(src + str_len);
		str_len++;
	}
	*(dest + str_len) = '\0';
	return (dest);
}
