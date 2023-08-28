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
	listint_t *new = h;
	int count = 0;

	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
