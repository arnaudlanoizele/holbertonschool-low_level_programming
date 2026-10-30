#include "main.h"

/**
 * print_line - Prints a straight line in the terminal
 * @n: Number of underscores to print
 */

void print_line(int n)
{
	int counter = 0;

	while (counter < n)
	{
		counter++;
		_putchar('_');
	}

	_putchar('\n');
}
