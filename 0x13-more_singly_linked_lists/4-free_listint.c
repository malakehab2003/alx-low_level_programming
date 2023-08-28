#include "lists.h"

/**
 * free_list - free linked list
 *
 * Return: void
 *
 * @head: pointer to the first pointer
 *
*/

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
