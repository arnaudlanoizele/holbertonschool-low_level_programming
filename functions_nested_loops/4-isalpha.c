#include "main.h"

/**
 * _isalpha - Check if a character is an alphabetic letter
 * @c: Character to check
 *
 * Return: 1, Otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
