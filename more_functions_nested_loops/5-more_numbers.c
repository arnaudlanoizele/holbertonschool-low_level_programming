#include "main.h"

/**
 * more_numbers - Prints the digit from 0 to 14 ten times
 * followed by a new line
 */

void more_numbers(void)
{
	int number = 0;
	int counter = 0;

	while (counter < 10)
	{
		counter++;
		number = 0;

		while (number <= 14)
		{
			if (number >= 10)
			{
				_putchar (number / 10 + '0');
			}
			_putchar (number % 10 + '0');
			number++;
		}
		_putchar('\n');
	}
}
