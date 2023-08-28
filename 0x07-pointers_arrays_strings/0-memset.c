#include "main.h"

/**
 * _memset - this funtion fills memory with a constant byte.
 * @b: a constant byte.
 * @num: number of bytes.
 * @s: pointers to memory.
 *
 * Return: A pointer to memory area s.
*/
char *_memset(char *s, char b, unsigned int num)
{
unsigned int i;

i = 0;
while (i < num)
{
s[i] = b;
i++;
}

return (s);
}
