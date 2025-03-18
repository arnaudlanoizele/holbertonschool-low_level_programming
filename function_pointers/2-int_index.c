#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - Searches for an integer in an array using a comparison function
* @array: The array to search through
* @size: The size to search trough
* @cmp: pointer is the function to be used
*       to compare values
* Return: The index of the firs element for which the cmp function does not
*       return 0 or -1 no element matches or if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}

for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
{
return (index);
}
}
return (-1);
}
