#include "lists.h"

void node_pointers(dlistint_t *new, dlistint_t *node, dlistint_t *prev);

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
		if (idx == 1)
			prev = new;
	}
	if (new == NULL && idx != 0)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = NULL;
		node->prev = prev;
		prev->next = node;
		node->n = n;
		return (node);
	}
	node->n = n;
	node_pointers(new, node, prev);
	return (node);
}

/**
 * node_pointers - fix pointers
 *
 * Return: void
 *
 * @new: the next node
 *
 * @node: the node to add
 *
 * @prev: the latter node
*/

void node_pointers(dlistint_t *new, dlistint_t *node, dlistint_t *prev)
{
	prev = new->prev;
	node->next = new;
	node->prev = prev;
	new->prev = node;
	prev->next = node;
}
