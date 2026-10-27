#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int chiffre = 1;

	putchar('0');

	while (chiffre < 10)
	{
		putchar(',');
		putchar(' ');
		putchar(chiffre + '0');
		chiffre++;
	}

	putchar('\n');
	return (0);
}
