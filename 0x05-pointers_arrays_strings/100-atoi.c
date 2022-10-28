#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - convert string to number
 * @s: input character
 * Return: 0
 */

int _atoi(char *s)
{
	int count = 0;
	int n;
	int convert;

	for (n = 0; *(s + n) != '\0'; n++)
	{
		count++;
	}

	char i[count];

	strcpy(i, s);
	convert = atoi(i);
}
