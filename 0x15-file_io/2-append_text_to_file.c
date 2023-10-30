#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 * Return: 1 on success, -1 if failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, bytes_w, length = 0;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[file_desc])
			file_desc++;
		bytes_w = write(file_desc, text_content, file_desc);
		if (bytes_w == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
