#include "search_algos.h"

skiplist_t *skiplist_linear(skiplist_t *start, skiplist_t *end, int value);

/**
 * linear_skip - search element in list with linear skip search
 *
 * Return: the first pointer of the searching number
 *
 * @list: list of elements
 *
 * @value: the value to search for
*/

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *new, *start, *end;
	int flag;

	if (list == NULL)
		return (NULL);
	flag = 0;
	new = list->express;
	start = list;
	end = new;
	while (new->n < value)
	{
		printf("Value checked at index [%li] = [%i]\n", new->index, new->n);
		if (new->express == NULL)
		{
			flag = 1;
			break;
		}
		start = new;
		new = new->express;
		end = new;
	}
	if (flag == 1)
	{
		start = end;
		while (end->next != NULL)
		{
			end = end->next;
		}
	}
	if (flag == 0)
		printf("Value checked at index [%li] = [%i]\n", new->index, new->n);
	printf("Value found between indexes [%li] and [%li]\n",
		start->index, end->index);
	return (skiplist_linear(start, end, value));
}

/**
 * skiplist_linear - search in skip list linear
 *
 * Return: pointer to the expected node or NULL
 *
 * @start: the first node
 *
 * @end: the last node
 *
 * @value: value searching for
*/

skiplist_t *skiplist_linear(skiplist_t *start, skiplist_t *end, int value)
{
	while (start != end)
	{
		printf("Value checked at index [%li] = [%i]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	if (start != NULL)
	{
		printf("Value checked at index [%li] = [%i]\n", start->index, start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
}
