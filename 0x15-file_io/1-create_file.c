#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writen in the file.
 *
 * Return: 1 if it success. -1 if  fails.
 */
int create_file(const char *filename, char *text_content)
{
	int len;
	int bytes_written;

	if (!filename)
		return (-1);

	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	bytes_written = write(fd, text_content, len);

	if (bytes_written == -1)
		return (-1);

	close(fd);

	return (1);
}
