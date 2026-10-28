#include "main.h"

/**
 * print_sign - Check the sign of a number
 * @n: Integer to check
 *
 * Return: 1 if the number is positive,
 * 0 if the number is equal to zero,
 * -1 if the number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
