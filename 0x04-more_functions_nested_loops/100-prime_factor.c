#include <stdio.h>
/**
 * main - print the largest prime number.
 * Return: 0 (success)
*/

int main(void)
{
unsigned long long number = 612852475143;
unsigned long long largest_prime_factor = 0;

for (unsigned long long i = 2; i * i <= number; i++)
{
while (number % i == 0)
{
largest_prime_factor = i;
number /= i;
}
}

if (number > 1)
largest_prime_factor = number;

printf("%llu\n", largest_prime_factor);

return (0);
}
