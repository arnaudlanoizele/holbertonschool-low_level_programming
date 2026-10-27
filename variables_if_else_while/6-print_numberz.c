#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chiffre = 0;

	while (chiffre <= 9)
	{
		putchar(chiffre + 48);
		chiffre++;
	}

	putchar('\n');
	return (0);
}
