#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if ((signed int) index < 0 || index >= 64)
{
return (-1);
}
return ((n >> index) & 1);
}
