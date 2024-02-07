#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);
int binary_search_recursion(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - search element in array with advanced binary
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @size: the size of array
 *
 * @value: the value to search for
*/

int advanced_binary(int *array, size_t size, int value)
{
	size_t start, end;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;
	return (binary_search_recursion(array, start, end, value));
}

/**
 * binary_search_recursion - recursive function to search by binary search
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @value: the value to search for
 *
 * @start: the start index
 *
 * @end: the end index
*/

int binary_search_recursion(int *array, size_t start, size_t end, int value)
{
	size_t i;

	i = (start + end) / 2;
	if (end < start)
		return (-1);
	print_array(array, start, end);
	if (array[i] == value && array[i - 1] != value && array[i - 2] != value)
		return (i);
	else if (array[i] == value)
		return (binary_search_recursion(array, start, i, value));
	else if (array[i] > value)
		return (binary_search_recursion(array, start, i - 1, value));
	return (binary_search_recursion(array, i + 1, end, value));
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
