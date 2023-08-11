#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 * Return: Always (Success)
*/
int main(void)
{
int r, o, k, a;

for (r = 48; r <= 57; r++)
{
for (o = 48; o <= 57; o++)
{
for (k = 48; k <= 57; k++)
{
for (a = 48; a <= 57; a++)
{
if (((k + a) > (r + o) &&  k >= r) || r < k)
{
putchar(r);
putchar(o);
putchar(' ');
putchar(k);
putchar(a);

if (r + o + k + a == 227 && r == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
