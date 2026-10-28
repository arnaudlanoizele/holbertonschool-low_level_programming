#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet_x10
 */

void print_alphabet_x10(void)
{
	int lettre = 'a';
	int compteur = 0;

	while (compteur < 10)
	{
		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		compteur++;
		lettre = 'a';
		_putchar('\n');
	}
}
