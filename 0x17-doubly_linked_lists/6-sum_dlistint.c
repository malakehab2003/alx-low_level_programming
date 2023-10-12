#include "lists.h"

/**
 * sum_dlistint - sum the number in each node in the list
 *
 * Return: the sum of numbers
 *
 * @head: the head of the list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *new;

	new = head;
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
