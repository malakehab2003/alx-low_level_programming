#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array
 *
 * Return: pointer to the array
 *
 * @size: size of the array
 *
 * @c: the chars of the array
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr;
	int i = size - 1;
	
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return 1;
	}

	while (i)
	{
		arr[i] = c;
		i--;
	}

	free(arr);
	return (arr);
}
