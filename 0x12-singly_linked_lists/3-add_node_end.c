#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node
 *
 * Return: pointer to the added node
 *
 * @head: pointer to the first pointer
 *
 * @str: string to put in the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *itr = *head;
	unsigned int count = 0;

	while (itr->next != NULL)
	{
		itr = itr->next;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[count] != 0)
	{
		count++;
	}
	new->len = count;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	itr->next = new;
	return (new);
}
