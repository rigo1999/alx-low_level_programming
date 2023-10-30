#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The content to write in the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_w;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_w = write(file_desc, text_content, strlen(text_content));
		if (bytes_w == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}

