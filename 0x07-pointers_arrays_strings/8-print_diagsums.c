#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int i, j, d1_sum = 0, d2_sum = 0;
j = i * size + i;

for (i = 0; i < size; i++)
{
d1_sum += a[j];
d2_sum += a[i * size + (size - i - 1)];
}

printf("The sum of the first diagonal is: %d\n", d1_sum);
printf("The sum of the second diagonal is: %d\n", d2_sum);
}
