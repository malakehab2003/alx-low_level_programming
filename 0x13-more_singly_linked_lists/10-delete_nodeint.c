#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 *
 * Return: 1 if successful
 *
 * @head: pointer to the first pointer
 *
 * @index: the place to remove the point
 *
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int count = 0;

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (count == index - 1)
		{
			tmp2 = tmp->next;
			tmp->next = tmp2->next;
			free(tmp2);
			return (1);
		}
		count++;
		tmp = tmp->next;
	}
	return (-1);

}
