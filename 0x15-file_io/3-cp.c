#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * copy_to_file - a function.
 * @file_from: file.
 * @file_to: file.
 * Return: 0
 */

int copy_file(const char *file_from, const char *file_to)
{
	int hfd_from;
	int hfd_to;
	ssize_t hwrite_bytes;
	ssize_t hread_bytes;
	char hbuffer[BUFFER_SIZE];

	hfd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);
	if (hfd_to == -1)
        {
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
        }
	hfd_from = open(file_from, O_RDONLY);
	if (hfd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	hread_bytes = read(hfd_from, hbuffer, BUFFER_SIZE);
	while (hread_bytes != -1)
	{
		hwrite_bytes = write(hfd_to, hbuffer, hread_bytes);
		if (hwrite_bytes != hread_bytes)
		{
			dprintf(2, "Error: Can't close fd %s\n", file_to );
			exit(100);
		}

		close(hfd_from);
		close(hfd_to);
	}
	return (0);
}
