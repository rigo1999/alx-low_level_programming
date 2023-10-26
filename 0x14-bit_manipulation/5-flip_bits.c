/**
 * flip_bits - Returns the number of bits needed to flip to get from one
 * number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _result = n ^ m;
	unsigned int counter = 0;

	while (_result > 0)
	{
		counter += _result & 1;
		_result >>= 1;
	}

	return (counter);
}
