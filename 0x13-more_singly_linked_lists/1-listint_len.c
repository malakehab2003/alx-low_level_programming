#include "lists.h"

/**
 * listint_len - get the number of nodes
 *
 * Return: size of the list
 *
 * @h: the pointer to the list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
