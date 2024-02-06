#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);

/**
 * linear_search - search element in array with linear search
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @size: the size of array
 *
 * @value: the value to search for
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	while (end > start)
	{
		print_array(array, start, end);
		i = (start + end) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}
	return (-1);
}

/**
 * print_array - print givin array
 *
 * Return: void
 *
 * @array: the array to print
 *
 * @start: the first index to array
 *
 * @end: the last index of the array
*/

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
		{
			printf("%i\n", array[i]);
			return;
		}
		printf("%i, ", array[i]);
	}
}
