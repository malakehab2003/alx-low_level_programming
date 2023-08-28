#include "lists.h"

/**
 * sum_listint - sum numbers of the list
 *
 * Return: the sum
 *
 * @head: pointer to the first pointer
 *
*/

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head ==NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
