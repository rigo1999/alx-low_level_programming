#include "main.h"

/**
 * read_textfile - Reads and prints a text file
 * @filename:  name of file
 * @letters: The number of letters to read and print
 * Return: The actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t read_b, write_bit;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	read_b = read(file_d, buffer, letters);
	close(file_d);
	if (read_b == -1)
	{
		free(buffer);
		return (0);
	}
	write_bit = write(STDOUT_FILENO, buffer, read_b);
	free(buffer);
	if (write_bit != read_b)
		return (0);
	return (write_bit);
}

