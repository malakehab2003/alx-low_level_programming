#include "lists.h"

/**
 * reverse_listint - reverse linked list
 *
 * Return: pointer to the head node
 *
 * @head: pointer to the first pointer
 *
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *forward;

	tmp = *head;
	*head = (*head)->next;
	forward = (*head)->next;
	tmp->next = NULL;
	while (*head != NULL)
	{
		(*head)->next = tmp;
		tmp = *head;
		*head = forward;
		forward = forward->next;
	}
	*head = tmp;
	return (*head);
}
