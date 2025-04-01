#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
*
* @h: the actual first node
* @idx: index where to insert the node (starting from 0)
* @n: Integer to fill the new node
*
* Return: address of new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *front = *h;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (h == NULL || node == NULL)
	{
		return (NULL);
	}
	if (*h == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (idx > 1)
	{
		if (front == NULL)
		{
			free(node);
			return (NULL);
		}
		front = front->next;
		idx--;
	}
	node->next = front->next;
	node->prev = front;
	if (front->next != NULL)
		front->next->prev = node;
	front->next = node;
	return (node);
}
