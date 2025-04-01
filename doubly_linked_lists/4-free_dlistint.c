#include "lists.h"

/**
* free_dlistint - Free a double linked list
*
* @head: first element of the list
*
* Return: nothing (void)
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
