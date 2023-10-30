#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * show_error - Displays an error message and exits the program.
 * @msg: The error message to display.
 */
void show_error(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * show_data - Displays information from the ELF header.
 * @hd: Pointer to the ELF header structure.
 */
void show_data(Elf64_Ehdr *hd)
{
	printf("Magic: %x %x %x %x\n", hd->e_ident[0], hd->e_ident[1], hd->e_ident[2], hd->e_ident[3]);
	printf("Class: %s\n", (hd->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("Data: %s\n", (hd->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", hd->e_ident[EI_VERSION]);
    /*Add more fields as needed*/
}

/**
 * main - Displays the information contained in the ELF header at the
 *        start of an ELF file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr hd;

	if (argc != 2)
	{
		show_error("Usage: elf_header elf_filename");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		show_error("Can't open file");
	}
	if (read(fd, &hd, sizeof(hd)) != sizeof(hd))
	{show_error*("Can't read ELF header");
	}
	if (hd.e_ident[EI_MAG0] != ELFMAG0 || hd.e_ident[EI_MAG1] != ELFMAG1 ||
			hd.e_ident[EI_MAG2] != ELFMAG2 || hd.e_ident[EI_MAG3] != ELFMAG3)
	{
		show_error*("Not an ELF file");
	}
	show_data(&hd);
	close(fd);
    return (0);
}

