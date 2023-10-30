#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 97, 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s source_file destination_file\n", argv[0]);
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	destination_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destination_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(source_fd);
		exit(99);
	}

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written != bytes_read || bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(source_fd);
			close(destination_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(destination_fd);
		exit(98);
	}

	if (close(source_fd) == -1 || close(destination_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
