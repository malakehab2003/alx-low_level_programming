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
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

