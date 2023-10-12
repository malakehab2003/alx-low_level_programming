#include "lists.h"

/**
 * print_dlistint - print data for double linked list
 *
 * Return: size of the list
 *
 * @h: pointer to the head of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t count = 0;

	new = h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
