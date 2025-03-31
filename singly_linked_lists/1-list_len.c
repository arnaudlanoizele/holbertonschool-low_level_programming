#include "lists.h"

/**
 * list_len - returns the numberr of elements in a linked list
 *
 * @h: first element of the list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
