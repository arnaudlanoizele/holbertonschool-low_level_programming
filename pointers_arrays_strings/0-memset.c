#include "main.h"
#include <stdio.h>

/**
* _memset - Fills the first n bytes of the memory area
* @s: A pointer to the memory area with.
* @b: The caracter to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
