#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
_putchar((n & 1) + '0');
print_binary(n >> 1);
}

