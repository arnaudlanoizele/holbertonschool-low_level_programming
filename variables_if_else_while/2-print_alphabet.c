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
		putchar(lettre);
		lettre++;
	}

	putchar('\n');
	return (0);
}
