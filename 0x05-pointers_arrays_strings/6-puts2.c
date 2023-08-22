#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
*/
void puts2(char *str)
{
int lengh, i;

lengh = 0;

while (str[lengh] != '\0')
{
lengh++;
}

for (i = 0; i < lengh; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
