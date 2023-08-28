#include "lists.h"

/**
 * get_nodeint_at_index - get the node in the index
 *
 * Return: the node
 *
 * @head: pointer to the first pointer
 *
 * @index: the node to get
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
