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
	int n;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
