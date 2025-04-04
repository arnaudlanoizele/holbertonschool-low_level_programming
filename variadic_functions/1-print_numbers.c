#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - Prints numbers, followed by a new line
* @separator: A string to be printed between numbers
* @n: A numbers of integers passed to be function
* @...: A variable numbers of integers passed to the function
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
