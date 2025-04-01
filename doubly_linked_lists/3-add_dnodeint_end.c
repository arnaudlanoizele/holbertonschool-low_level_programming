#include "lists.h"

/**
* add_dnodeint_end - Adds a news node at the end of a list
*
* @head: the actual first node
* @n: an integerto fill the new node
*
* Return: the adress of the new element, or NULL if failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		{
		*head = new;
		new->prev = NULL;
		}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new;
		new->prev = current;
	}
	return (new);
}
