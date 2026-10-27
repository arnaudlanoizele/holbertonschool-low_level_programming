#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettre = 'a';
	char LETTRE = 'A';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}

	while (LETTRE <= 'Z')
	{
		putchar(LETTRE);
		LETTRE++;
	}

	putchar('\n');
	return (0);
}
