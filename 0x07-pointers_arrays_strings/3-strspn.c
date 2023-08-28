#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int checker;

while (*s)
{
for (checker = 0; accept[checker]; checker++)
{
if (*s == accept[checker])
{
n++;
break;
}
else if (accept[checker + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
