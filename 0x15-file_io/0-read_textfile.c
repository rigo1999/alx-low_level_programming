#include "main.h"
#include <stddef.h>

/**
 * read_file_and_print - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @num_letters: number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_file_and_print(const char *filename, size_t num_letters)
{
	int file_descriptor;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * (num_letters + 1));
	if (buffer == NULL || filename == NULL)
	{
		free(buffer);
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	ssize_t n_read = read(file_descriptor, buffer, num_letters);
	if (n_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	buffer[n_read] = '\0';

	ssize_t wrote = write(STDOUT_FILENO, buffer, n_read);
	if (wrote != n_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (n_read);
}

