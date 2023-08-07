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
	int i = size - 1, j = 0;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		arr[j] = c;
		j++;
	}

	return (arr);
}
