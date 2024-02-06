#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search element in array with jump search
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @size: the size of array
 *
 * @value: the value to search for
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, sr, flag;

	if (array == NULL)
		return (-1);
	i = 0;
	flag = 0;
	sr = sqrt(size);
	end = sr;
	start = 0;
	while (i < size)
	{
		if (array[i] >= value)
		{
			flag = 1;
			break;
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		start = i;
		i += sr;
		end = i;
	}
	if (i >= size)
	{
		printf("Value found between indexes [%li] and [%li]\n", start, end);
		while (start < size)
		{
			printf("Value checked array[%li] = [%i]\n", start, array[start]);
			if (value == array[start])
				return (start);
			start++;
		}
	}
	if (flag == 0)
		return (-1);
	printf("Value found between indexes [%li] and [%li]\n", start, end);
	while (start <= end)
	{
		printf("Value checked array[%li] = [%i]\n", start, array[start]);
		if (array[start] == value)
		{
			return (start); 
		}
		start++;
	}
	return (-1);
}
