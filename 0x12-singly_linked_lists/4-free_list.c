#include "lists.h"

/**
 * free_list - free linked list
 *
 * Return: void
 *
 * @head: pointer to the first pointer
 *
*/

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp->next != NULL)
	{
		head = temp;
		temp = temp->next;
		free(head);
	}
	free(temp);

}
