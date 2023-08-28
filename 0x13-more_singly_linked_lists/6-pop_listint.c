#include "lists.h"

/**
 * pop_listint - remove the head node
 *
 * Return: the number of the node
 *
 * @head: pointer to the first pointer
 *
*/

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp = (*head)->next;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
