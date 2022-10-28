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

	for (int n = 0; *(s + n) != '\0'; n++)
	{
		count++;
	}
	char i[count + 1];

	strcpy(i, s);
	int convert = atoi(i);
}
