#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - a function.
 * @filename: file name.
 * @letters: letters number.
 * Return: number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int hfd;
	char *hbuffer;
	size_t hbytes_read;

	if (filename == NULL)
	{
		return (0);
	}
	hfd = open(filename, O_RDONLY);
	if (hfd	== -1)
	{
		return (0);
	}
	hbuffer = malloc(letters + 1);
	if ((hbuffer) == NULL)
	{
		close(hfd);
		return (0);
	}
	hbytes_read = read(hfd, hbuffer, letters);
	if (letters < hbytes_read && hbytes_read != letters)
	{
		close(hfd);
		return (0);
	}
	write(STDOUT_FILENO, hbuffer, hbytes_read);
	close(hfd);
	return (hbytes_read);
}
