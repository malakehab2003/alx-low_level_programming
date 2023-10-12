#include "lists.h"

/**
 * get_dnodeint_at_index - get index point
 *
 * Return: pointer to the point
 *
 * @head: the head of the list
 *
 * @index: the index of the point
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;

	if (index < 0)
		return (NULL);
	new = head;
	while (index != 0)
	{
		new = new->next;
		index--;
	}
	return (new);
}
