#include "lists.h"

/**
* sum_dlistint - Give the sum of all the data (n) of a double lincked list
*
* @head: the actual first node
*
* Return: if the list is empty return 0
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
