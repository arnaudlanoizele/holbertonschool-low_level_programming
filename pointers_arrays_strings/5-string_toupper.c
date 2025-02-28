#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* string_toupper - Changes all lowercase letters
*                  of a string to uppercase.
* @str: The string to be changed.
*
* Return: A pointer to the changed string.
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
