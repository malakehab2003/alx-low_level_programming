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

	if (temp->next != NULL)
	{
		temp = temp->next;
		free_list(temp);
	}
	free(temp);

}
