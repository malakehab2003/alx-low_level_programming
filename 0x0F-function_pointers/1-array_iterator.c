#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (;i < size; i++)
	{
		action(array[i]);
	}
}
