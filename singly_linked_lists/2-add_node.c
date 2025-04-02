#include "lists.h"
#include <string.h>

/**
* add_node - Adds a new node at the beginning of a list
*
* @head: the actuaal first node
* @str: a string to initialize the new first node
*
* Return: the address of the new element, or NULL if it faile
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *copy;
	int len;

	if (str == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(copy);
		return (NULL);
	}

	len = strlen(copy);

	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
