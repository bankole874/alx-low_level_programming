#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - a function.
 * @filename: file name.
 * @text_content: letters number.
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int hfd;
	size_t hwrite_bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	hfd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (hfd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(hfd);
		return (1);
	}
	hwrite_bytes = write(hfd, text_content, strlen(text_content));
	if (hwrite_bytes != strlen(text_content))
	{
		close(hfd);
		return (-1);
	}
	close(hfd);
	return (1);
}
