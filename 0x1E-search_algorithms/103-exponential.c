#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);
int binary_s(int *array, size_t s, size_t e, int value);

/**
 * exponential_search - search element in array with exponential search
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @size: the size of array
 *
 * @value: the value to search for
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t pos, start, end, flag;

	if (array == NULL)
		return (-1);
	pos = 1;
	start = 0;
	end = 1;
	flag = 0;
	while (pos < size)
	{
		if (array[pos] >= value)
		{
			flag = 1;
			break;
		}
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		start = pos;
		pos *= 2;
		end = pos;
	}
	if (pos >= size)
	{
		printf("Value found between indexes [%li] and [%li]\n", start, size - 1);
		return (binary_s(array, start, size - 1, value));
	}
	if (flag == 0)
		return (-1);
	printf("Value found between indexes [%li] and [%li]\n", start, end);
	return (binary_s(array, start, end, value));
}

/**
 * binary_s - search element in array with binary search
 *
 * Return: the index of the searching number
 *
 * @array: array of elements
 *
 * @s: the start index
 *
 * @e: the end index
 *
 * @value: the value to search for
*/

int binary_s(int *array, size_t s, size_t e, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);
	start = s;
	end = e;
	while (end >= start)
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
