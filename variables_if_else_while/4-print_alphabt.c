#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		if (lettre != 'e' && lettre != 'q')
		putchar(lettre);
		lettre++;
	}

	putchar('\n');
	return (0);
}
