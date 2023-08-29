#include "lists.h"

/**
 * free_listint_safe - free linked list
 *
 * Return: no of the nodes
 *
 * @h: pointer to the first pointer
 *
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *new;
	size_t count = 0;
	int min;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		min = *h - (*h->next);
		if (min > 0)
		{
			count++;
			new = (*h)->next;
			free(*h);
			*h = new;
		}
		else
		{
			free(*h);
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
