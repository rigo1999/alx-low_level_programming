#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a binary string
 * Return: the converted number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, base = 1, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != NULL)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len > 0)
	{
		len--;
		if (b[len] == '1')
			number += base;
		base *= 2;
	}
	return (number);
}
