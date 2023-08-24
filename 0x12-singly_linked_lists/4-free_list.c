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
		temp = temp->next;	
		head = temp;
		free(head->str);
		free(head);
	}
	free(temp);

}
