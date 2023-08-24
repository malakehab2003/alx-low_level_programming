#include "lists.h"

/**
 * print_list - print linked list
 *
 * Return: size of the list
 *
 * @h: the pointer to the list
*/

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *new = h;

	if (h == NULL)
	{
		printf("(nil)\n");
		return (1);
	}

	while (new != NULL)
	{
		if (new->str != NULL)
			printf("[%i] %s\n", new->len, new->str);
		else
			printf("[0] (nil)\n");
		count++;
		new = new->next;
	}

	return (count);
}
