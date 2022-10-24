#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input a
 * @b: input b
 * Return: 0 Always(Success)
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
