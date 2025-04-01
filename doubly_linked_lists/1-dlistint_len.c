#include "lists.h"

/**
* dlistint_len - Count the number of node in a list
*
* @h: first element of the list
*
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
