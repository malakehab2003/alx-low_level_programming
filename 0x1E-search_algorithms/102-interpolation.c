#include "search_algos.h"

/**
 * interpolation_search - search element in array with interpolation search
 *
 * Return: the first index of the searching number
 *
 * @array: array of elements
 *
 * @size: the size of array
 *
 * @value: the value to search for
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low)
				/ (array[high] - array[low]))
				* (value - array[low]));
		if (pos > size - 1)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
