#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free double linked list
 *
 * Return: void
 *
 * @head: the head of the list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	if (head != NULL)
	{
		if (head->next == NULL)
			free(head);
		else
		{
			new = head->next;
			while (head != NULL)
			{
				free(head);
				head = new;
				new = new->next;
			}
		}
	}
}
