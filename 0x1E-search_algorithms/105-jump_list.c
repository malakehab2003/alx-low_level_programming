#include "search_algos.h"
#include <math.h>

listint_t *linear_s_list(listint_t *start, listint_t *end, int value);

/**
 * jump_list - search element in linked list with jump search
 *
 * Return: the first index of the searching number
 *
 * @list: list of elements
 *
 * @size: the size of array
 *
 * @value: the value to search for
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, sr, flag, interval;
	listint_t *new, *start, *end;

	new = list;
	sr = sqrt(size);
	i = sr;
	flag = 0;
	while (i  <= size + 3)
	{
		start = new;
		interval = 0;
		while (interval < sr && new->next != NULL)
		{
			new = new->next;
			interval++;
		}
		end = new;
		printf("Value checked at index [%li] = [%i]\n", new->index, new->n);
		if (new->n >= value)
		{
			flag = 1;
			break;
		}
		i += sr;
	}

	if (i >= size)
	{
		printf("Value found between indexes [%li] and [%li]\n",
			start->index, end->index);
		while (start != NULL)
		{
			printf("Value checked at index [%li] = [%i]\n", start->index, start->n);
			if (start->n == value)
				return (start);
			start = start->next;
		}
	}
	if (flag == 0)
		return (NULL);
	return (linear_s_list(start, end, value));
}
/**
 * linear_s_list - linear search in linked list
 *
 * Return: the node searching for
 *
 * @start: the first node to search in
 *
 * @end: the last node to search in
 *
 * @value: the value to search for
*/
listint_t *linear_s_list(listint_t *start, listint_t *end, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
		start->index, end->index);
	while (start != end && start != NULL)
	{
		printf("Value checked at index [%li] = [%i]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	return (NULL);
}
