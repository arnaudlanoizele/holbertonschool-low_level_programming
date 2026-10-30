#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: Number of backslashes to print
 */

void print_diagonal(int n)
{
	int counter = 0;
	int space = 0;

	while (counter < n)
	{
		space = 0;
		while (space < counter)
		{
			_putchar(' ');
			space++;
		}
		counter++;
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
