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
	int len = 0;
	list_t *new = malloc(sizeof(list_t));
	char *copy = strdup(str);

	if (copy == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new->str = copy;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
