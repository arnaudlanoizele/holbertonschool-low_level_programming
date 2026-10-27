#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chiffre = 0;
	char lettre = 'a';

	while (chiffre <= 9)
	{
		putchar(chiffre + 48);
		chiffre++;
	}

	while (lettre <= 'f')
	{
		putchar(lettre);
		lettre++;
	}

	putchar('\n');
	return (0);
}
