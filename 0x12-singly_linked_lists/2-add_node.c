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
	list_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	while (str[i] != 0)
	{
		i++;
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
