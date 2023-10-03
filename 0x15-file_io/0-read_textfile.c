#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return (0);
}

int fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}

char *buffer = malloc(letters);

if (buffer == NULL)
exit(1);

ssize_t bytes_read = read(fd, buffer, letters);
if (bytes_read < 0)
{
free(buffer);
close(fd);
return (0);
}
ssize_t bytes_written = 0;

for (ssize_t i = 0; i < bytes_read; i++)
{
_putchar(buffer[i]);
bytes_written++;
}
free(buffer);
close(fd);
return (bytes_written);
}

