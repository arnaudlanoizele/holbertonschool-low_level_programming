#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 */

void print_alphabet(void)
{
	int lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}

	_putchar('\n');
}
