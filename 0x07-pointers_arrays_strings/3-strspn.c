/**
 * _strspn - function  calculates  the  length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 *
 * Return: the number of bytes matching accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, z, count, checker;

i = 0;
y = 0;
checker = 0;
count = 0;
while (s[i] != '\0')
{
y = 0;
checker = 0;
while (accept[y] != '\0')
{
if (accept[y] == s[i])
{
count++;
break;
}
z++;
}

if (checker == 0)
return (count);
i++;
}
return (count);
}
