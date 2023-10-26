#include "main.h"

/**
 * binary_to_uint - Converts a bin number to an unsigned int
 * @b: pointer to a binary string
 * Return: the converted number, or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, b = 1, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len > 0)
	{
		len--;
		if (b[len] == '1')
			n += b;
		b *= 2;
	}
	return (n);
}

