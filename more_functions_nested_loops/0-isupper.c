#include "main.h"
#include <stdio.h>
/**
 * _isupper - a function that checks for uppercase character
 * @ch: character to check for
 * Return: 1 if ch is uppercase else 0
 */

int _isupper(int ch)
{
	int result = 0;

	if (ch >= 65 && ch <= 90)
	{
		result = 1;
	}
	return (result);
}
