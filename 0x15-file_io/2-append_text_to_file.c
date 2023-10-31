#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * append_text_to_file - a function.
 * @filename: file name.
 * @text_content: text content.
 * Return: null
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int hfp;
	size_t htext_content_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	hfp = open(filename, O_WRONLY | O_APPEND);
	if (hfp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		htext_content_bytes = write(hfp, text_content, strlen(text_content));
		if (htext_content_bytes != strlen(text_content))
		{
			close(hfp);
			return (-1);
		}
	}
	close(hfp);
	return (1);
}
