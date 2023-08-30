#include "main.h"

/**
 * get_len - obtains length of a
 * @str: string
 * @lencount: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int get_len(char *str, int lencount)
{
if (*str == 0)
return (lencount - 1);
return (get_len(str + 1, lencount + 1));
}
/**
 * comp - compares string vs string reverse
 * @str: string
 * @lencount: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

int comp(char *str, int lencount)
{
if (*str != *(str + lencount))
return (0);
else if (*str == 0)
return (1);
return (comp(str + 1, lencount - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int is_palindrome(char *s)
{
int lencount;

lencount = get_len(s, 0);
return (comp(s, lencount));
}
