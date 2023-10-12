#include "lists.h"

/**
 * add_dnodeint - add a point and the start of the list
 *
 * Return: pointer to the added point
 *
 * @head: the head of the list
 *
 * @n: the data in the added point
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
