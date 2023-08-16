#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - find specific int
 *
 * Return: the index of this number
 *
 * @array: the array to search in
 *
 * @size: the size of the array
 *
 * @cmp: to compare two ints
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0, r;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		r = cmp(array[i]);
		if (r == 1)
		{
			return (i);
		}
	}
	return (-1);
}
