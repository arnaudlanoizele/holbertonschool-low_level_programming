#include "main.h"

/**
 * print_square - Prints a square
 * @size: Is the size of the square
 */

void print_square(int size)
{
	int row = 0;
	int column = 0;

	while (row < size)
	{
		column = 0;
		row++;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
