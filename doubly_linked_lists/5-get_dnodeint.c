#include "lists.h"

/**
 * get_dnodeint_at_index - Rreturns the nth node of a double linked list
 *
 * @head: the actual first node
 * @index: index of the node (starting from 0)
 *
 * Return: the address of the node, or NULL if it failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;

	while (node != NULL && index > 0)
	{
		node = node->next;
		index--;
	}

	return (node);
}
