#include "lists.h"

/**
 * delete_dnodeint_at_index - delete specific point
 *
 * Return: 1 if success
 *
 * @head: the head of the point
 *
 * @index: the index of the point
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fast, *slow, *node;

	node = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			free((*head)->prev);
			return (1);
		}
		free(*head);
		*head = NULL;
		return (1);
	}
	while (index != 0 && node != NULL)
	{
		index--;
		node = node->next;
	}
	if (node == NULL)
		return (-1);
	fast = node->next;
	slow = node->prev;
	if (fast != NULL)
		fast->prev = slow;
	if (slow != NULL)
		slow->next = fast;
	free(node);
	return (1);
}
