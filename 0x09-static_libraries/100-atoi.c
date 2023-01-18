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
	int sign = 1;
	unsigned int n = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		if (*s == '+')
			sign *= 1;
		s++;
	}
	while ('0' <= *s && *s <= '9' && *s != '\0')
	{
		n = (n * 10) + (*s - '0');
		s++;
	}
	return (n * sign);
}
