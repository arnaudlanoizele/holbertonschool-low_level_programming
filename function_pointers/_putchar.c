#include <unisted.h>
/**
* _putchar - Write the character c to stdout
* @c: The caracter to print
*
* Return: On succes 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _outchar(char c)
{
	return (write(1, &c, 1));
}
