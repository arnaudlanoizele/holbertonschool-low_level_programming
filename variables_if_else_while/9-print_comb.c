#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int chiffre = 0;

	while (chiffre <= 9)
	{
		putchar(chiffre + 48);
		if (chiffre < 9)
		{
			putchar(',');
			putchar(' ');
		}
		chiffre++;
	}

	putchar('\n');
	return (0);
}
