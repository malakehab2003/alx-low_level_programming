#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - make the function to all element in the array
 *
 * Return: void
 *
 * @array: the array to make the function to each elment
 *
 * @size: the size of the array
 *
 * @action: the function to affect the array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
