
/*
 * File: 100-elf_header.c
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *hd;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	hd = malloc(sizeof(Elf64_Ehdr));
	if (hd == NULL)
	{
		close(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, hd, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(hd);
		close(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
