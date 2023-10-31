#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
        if (ac != 3)
        {
                dprintf(2, "Usage: %s filename text\n", av[0]);
                exit(97);
        }
	copy_file(av[1], av[2]);
	return (0);
}
