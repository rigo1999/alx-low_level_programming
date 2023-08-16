#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int i = 0;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0)
		{
			sum3 += i;
		} else if ((i % 5) == 0)
		{
			sum5 += i;
		}
		i++;
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
