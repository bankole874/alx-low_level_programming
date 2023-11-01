#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - a function.
 * @ac: argument.
 * @av: argument.
 * Return: 0
 */

int main(int ac, char **av)
{
	int hfd_from;
	int hfd_to;
	ssize_t hwrite_bytes;
	ssize_t hread_bytes;
	char hbuffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	hfd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (hfd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	hfd_from = open(av[1], O_RDONLY);
	if (hfd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	hread_bytes = read(hfd_from, hbuffer, BUFFER_SIZE);
	while ((hread_bytes) > 0)
	{
		hwrite_bytes = write(hfd_to, hbuffer, hread_bytes);
		if (hwrite_bytes != hread_bytes)
		{
			dprintf(2, "Error: Can't close fd %s\n", av[2]);
			exit(100);
		}

		close(hfd_from);
		close(hfd_to);
	}
	return (0);
}
