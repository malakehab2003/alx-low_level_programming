#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate memory
 *
 * Return: pointer to the new memory
 *
 * @ptr: the old pointer
 *
 * @old_size: the old size
 *
 * @new_size: the new size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL)
		return (arr);
	}
	if (new_size > old_size)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*(arr + i) = *(ptr + i);
		}
		free(ptr);
	}
	return (arr);
}
