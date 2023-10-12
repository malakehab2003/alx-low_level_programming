#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 *
 * Return: pointer to the added node
 *
 * @h: the head of the list
 *
 * @idx: the index to add the point in
 *
 * @n: the data in the node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node, *prev;

	new = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (idx == 0)
	{
		node->n = n;
		node->next = new;
		node->prev = NULL;
		new->prev = node;
		*h = node;
		return (*h);
	}
	while (idx != 0 && new != NULL)
	{
		idx--;
		new = new->next;
	}
	if (new == NULL)
	{
		free(node);
		return (NULL);
	}
	prev = new->prev;
	node->n = n;
	node->next = new;
	node->prev = prev;
	new->prev = node;
	prev->next = node;
	return (node);
}
