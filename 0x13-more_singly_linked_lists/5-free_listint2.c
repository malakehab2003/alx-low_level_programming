#include "lists.h"

/**
 * free_listint2 - free linked list
 *
 * Return: void
 *
 * @head: pointer to the first pointer
 *
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
