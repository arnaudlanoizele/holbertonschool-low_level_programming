#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Prints string followed by a new line
* @separator: The string to be printed between strings
* @n: A number of string passed to the function
* @...: A variable number of strings to be printed
*
* Description: If separator is NULL don't print it
*				If one of the string is NULL print (nil) instead
*
*/

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
