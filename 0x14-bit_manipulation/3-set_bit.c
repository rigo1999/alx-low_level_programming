#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if ((signed int) index < 0 || index >= 64)
{
return (-1);
}
*n |= (1 << index);
return (1);
}
