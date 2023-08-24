#include "lists.h"

/**
 * add_node - add a new node
 *
 * Return: pointer to the added node
 *
 * @head: pointer to the first pointer
 *
 * @str: string to put in the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = head;
	int i = 0;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[i] != NULL)
	{
		i++;
	}
	new->len = i;
	new->next = *head;
	return (new);
}
