#include "lists.h"

/**
 * list_len - print number of nodes
 *
 * Return: size of the list
 *
 * @h: the pointer to the list
*/


size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
