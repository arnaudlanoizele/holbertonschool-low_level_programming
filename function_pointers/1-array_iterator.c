#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - Execute a function
*                 given as a parameter oneach element of an array
* @array: The array
* @size: size of the array
* @action: is a pointer to the function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
