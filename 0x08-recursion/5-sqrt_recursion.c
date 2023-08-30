#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @z: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int sqrt2(int a, int z)
{
if (z * z == a)
return (z);
else if (z * z > a)
return (-1);
return (sqrt2(a, z + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: int num
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is given accordingly
*/
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
