#include "main.h"
/**
 * _isalpha - checks for lowercase letters
 * @c: character to check
 *
 * Return: 0 or 1i
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
