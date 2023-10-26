#include "main.h"

/**
 * _recursive - A recursive function to print binary representation
 * @n: The number to be converted and printed
 */
void _recursive(unsigned long int n)
{
	if (n == 0)
		return;

	_recursive(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted and printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	_recursive(n);
}
