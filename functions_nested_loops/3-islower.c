#include "main.h"

/**
 * _islower - Checks if a caracter is lowercase
 * @c: Character to check
 *
 * Return: 1 if Lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
