#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - a function.
 * @ac: argument.
 * @av: argument.
 * Return: 0
 */

int main(int ac, char **av)
{
	int hfd_from, hfd_to;
	ssize_t hwrite_bytes, hread_bytes;
	char hbuffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);
	}
	hfd_from = open(av[1], O_RDONLY);
	if (hfd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	hfd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (hfd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	hread_bytes = BUFFER_SIZE;
	while (hread_bytes == BUFFER_SIZE)
	{
		hread_bytes = read(hfd_from, hbuffer, BUFFER_SIZE);
		if (hread_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		hwrite_bytes = write(hfd_to, hbuffer, hread_bytes);
		if (hwrite_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (close(hfd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", hfd_from), exit(100);
	}
	if (close(hfd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", hfd_from), exit(100);
	}
	return (0);
}
