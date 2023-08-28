#include "lists.h"

/**
 * print_listint - print linked list
 *
 * Return: size of the list
 *
 * @h: the pointer to the list
*/

size_t print_listint(const listint_t *h)
{
	listint_t *new;
	unsigned int count = 0;

	new = h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
