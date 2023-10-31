#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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
	hfp = fopen(filename, "r");
	if (hfp == NULL)
	{
		return (0);
	}
	hbuffer = malloc(letters + 1);
	if (hbuffer == NULL)
	{
		fclose(hfp);
		return (0);
	}
	hbytes_read = fread(hbuffer, 1, letters, hfp);
	if (hbytes_read != letters)
	{
		fclose(hfp);
		return (0);
	}
	fputs(hbuffer, stdout);
	fclose(hfp);
	return (hbytes_read);
}
