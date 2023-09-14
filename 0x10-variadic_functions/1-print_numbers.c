#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list int_args;
	unsigned int iterat;

	va_start(int_args, n);

	for (iterat = 0; iterat < n; iterat++)
	{
		printf("%d", va_arg(int_args, int));

		if (iterat != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(int_args);
}
