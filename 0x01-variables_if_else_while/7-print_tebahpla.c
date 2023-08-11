#include <stdio.h>
/**
 * main - Prints reversed alphabet
 * Return: Always 0.
*/
int main(void)
{
char alphaLetter;

for (alphaLetter = 'z'; alphaLetter >= 'a'; alphaLetter--)
putchar(alphaLetter);
putchar('\n');
return (0);
}
