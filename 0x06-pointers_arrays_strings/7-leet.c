/#include "main.h"
/**
 * leet - change vowels to numbers accordingly.
 * @s: analized string.
 *
 * Return: String with changes.
*/
char *leet(char *s)
{
char vow[] = "aeotlAEOTL";
char num[] = "4307143071";
int i = 0;
int j;

while (*(s + i) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(s + i) == vow[j])
{
*(s + i) = num[j];
}
}
i++;
}
return (s);
}
