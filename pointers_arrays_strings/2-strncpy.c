#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: pointer where string will be copied to
 * @src: string to be copied to dest
 * @n: number of characters to copy to dest
 * if src length is less than n, copy zeros
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
