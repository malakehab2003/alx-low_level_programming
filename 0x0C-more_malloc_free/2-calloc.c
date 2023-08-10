#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate an array
 *
 * Return: pointer to an array
 *
 * @nmemb: the array to allocate
 *
 * @size: the size of the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		arr[i] = '\0';
		i++;
	}
	arr[i] = 0;
	return (arr);
}
