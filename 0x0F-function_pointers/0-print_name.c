#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: inpot name
 * @f:function_parameter
 *
 * Return: no return.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
