#include "main.h"

/**
 * _strlen - length of a string
 * @s: input charater
 * Return: returns string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
