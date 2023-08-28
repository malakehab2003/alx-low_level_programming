#include "lists.h"

size_t print_listint(const listint_t *h)
{
	listint_t *new = h;
	int count = 0;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
