#include "main.h"

/**
 * strlen - length of a string
 * @s: input charater
 * Return: returns string
 */

int _strlen(char *s)
{
	int count = 0;

	do
	{
		count++;
	}
	while (*(s + count) != '\0');
	return (count);
}
