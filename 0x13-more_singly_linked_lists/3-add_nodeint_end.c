#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - add a new node
 *
 * Return: pointer to the added node
 *
 * @head: pointer to the first pointer
 *
 * @n: int to put in the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
