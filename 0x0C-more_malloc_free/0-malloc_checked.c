#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory siz to be allocated
 *
 * Return: pointer to the address of the memory siz
 */
void *malloc_checked(unsigned int b)
{
	void *siz;

	siz = malloc(b);
	if (siz == NULL)
		exit(98);
	return (siz);
}
