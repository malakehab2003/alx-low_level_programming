#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc a space of memory
 *
 * Return: void
 *
 * @b: the size of the memory to allocate
*/

void *malloc_checked(unsigned int b)
{
	void *arr;
	arr = malloc(b);
	if (arr == NULL)
	{
		exit (98);
	}
	return (arr);
}
