#include "lists.h"

/**
 * insert_nodeint_at_index - add a node in specfic place
 *
 * Return: pointer to the added node
 *
 * @head: pointer to the first pointer
 *
 * @idx: the place to add the point
 *
 * @n: the number to add in the node
 *
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	while (*head != NULL)
	{
		if (count == idx)
		{
			new->next = (*head)->next;
			(*head)->next = new;
			return (new);
		}
		count++;
		*head = (*head)->next;
	}
	return (NULL);
}
