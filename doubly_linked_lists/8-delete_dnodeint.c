#include "lists.h"

/**
* delete_dnodeint_at_index - That deletes the node at index
*
* @head: the actual first node
* @index: is the index of the node that should be deleted index starts at 0
*
* Returns: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmp->next = tmp->next;
		if (tmp->next != NULL)
			tmp->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
