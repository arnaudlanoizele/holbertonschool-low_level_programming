#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int chiffre = 0;

	while (chiffre <= 9)
	{
		printf("%d", chiffre);
		chiffre++;
	}

	printf("\n");
	return (0);
}
