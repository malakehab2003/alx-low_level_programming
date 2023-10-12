#include "lists.h"

/**
 * dlistint_len - count the length of list
 *
 * Return: the length
 *
 * @h: the head of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t count = 0;

	new = h;
	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
