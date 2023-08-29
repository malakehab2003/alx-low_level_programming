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
	listint_t *tmp = NULL, *forward = NULL;

	while (*head != NULL)
	{
		forward = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = forward;
	}
	*head = tmp;
	return (*head);
}
