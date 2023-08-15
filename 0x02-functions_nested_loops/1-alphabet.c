#include "main.h"

/**
 * print_alphabet - prints the alphabet 
 * Return:0 if successfully compiled
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
