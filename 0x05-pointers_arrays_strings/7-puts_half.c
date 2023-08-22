#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
*/

void puts_half(char *str)
{
int length = strlen(str) - 1;
int mid = length / 2;

if (length % 2 == 0)
{
for (int i = mid; i < length; i++)
{
printf("%c", str[i]);
}
}
else
{
int i;

for (i = mid + 1; i < length; i++)
{
printf("%c", str[i]);
}
}

printf("\n");
}
