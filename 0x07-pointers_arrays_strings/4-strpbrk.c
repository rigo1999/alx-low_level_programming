#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

i = 0;
j = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
return ((s + i));
j++;
}
i++;
}
return (NULL);
}
