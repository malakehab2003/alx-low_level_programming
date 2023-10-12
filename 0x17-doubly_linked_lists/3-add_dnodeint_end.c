#include "lists.h"

/**
 * add_dnodeint_end - add a point at the end of the list
 *
 * Return: the address of the new node
 *
 * @head: the head of the list
 *
 * @n: the data at the node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *itr;

	itr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (itr->next != NULL)
		itr = itr->next;
	itr->next = new;
	new->next = NULL;
	new->prev = itr;
	return (new);
}
