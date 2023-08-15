#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char let = 'a';

	while (let <= 'z')
	{
		_putchar(let);
		let++;

	}
	_putchar('\n');

}

