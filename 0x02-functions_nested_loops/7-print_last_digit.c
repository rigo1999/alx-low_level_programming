#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;

	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}
