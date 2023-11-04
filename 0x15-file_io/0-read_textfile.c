#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <main.h>

/**
 * read_textfile - a function.
 * @filename: file name.
 * @letters: letters number.
 * Return: number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *hfp;
	char *hbuffer;
	size_t hbytes_read;

	if (filename == NULL)
	{
		return (0);
	}
	hfp = open(filename, O_RDONLY);
	if (hfp == NULL)
	{
		return (0);
	}
	hbuffer = malloc(letters + 1);
	if (hbuffer == NULL)
	{
		close(hfp);
		return (0);
	}
	hbytes_read = read(hbuffer, letters, hfp);
	if (hbytes_read != letters)
	{
		close(hfp);
		return (0);
	}
	write(STDOUT_FILENO, hbuffer);
	close(hfp);
	return (hbytes_read);
}
