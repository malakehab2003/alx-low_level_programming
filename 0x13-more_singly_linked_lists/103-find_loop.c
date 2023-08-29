#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 *
 * Return: pointer to a loop
 *
 * @head: pointer to the first pointer
 *
*/

listint_t *find_listint_loop(listint_t *head)
{
	int min;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		min = h - h->next;
		if (min > 0)
		{
			return (h);
		}
		head = head->next;
	}
	return (NULL);
}
