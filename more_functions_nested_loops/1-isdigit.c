#include "main.h"

/**
 * _isdigit - Checks if a digit is 0 through 9
 * @c: Character to check
 *
 * Return: 1 if c is a digit, 0 Otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
