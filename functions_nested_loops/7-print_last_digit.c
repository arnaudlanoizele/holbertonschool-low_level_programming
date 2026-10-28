#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number to check
 *
 * Return: The value of the Last digit
 */

int print_last_digit(int n)
{
	int dernier = n % 10;

	if (n < 0)
	{
		_putchar(-dernier + '0');
		return (-dernier);
	}
	else
		_putchar(dernier + '0');
	return (dernier);
}
