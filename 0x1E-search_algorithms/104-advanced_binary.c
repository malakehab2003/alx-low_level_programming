#include "search_algos.h"

int advanced_binary_rec(int *array, size_t left, size_t right, int value);

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
	return (advanced_binary_rec(array, start, end, value));
}

/**
 * advanced_binary_rec - recursive function to search by binary search
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @value: the value to search for
 *
 * @left: the start index
 *
 * @right: the end index
*/

int advanced_binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);
	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_rec(array, left, i, value));
	return (advanced_binary_rec(array, i + 1, right, value));
}
