#include "main.h"

/**
 * read_textfile - Reads and prints a text file
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 * Return: The actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t r_bytes, w_bytes;
	char *buff;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_d);
		return (0);
	}
	r_bytes = read(file_d, buff, letters);
	close(file_d);
	if (r_bytes == -1)
	{
		free(buff);
		return (0);
	}
	w_bytes = write(STDOUT_FILENO, buff, r_bytes);
	free(buff);
	if (w_bytes != r_bytes)
		return (0);
	return (w_bytes);
}
