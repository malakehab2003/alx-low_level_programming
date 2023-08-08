#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a two dim. grid
 *
 * Return: 2 dimensional array of integers
 *
 * @width: the width of the array
 *
 * @height: the height of the array
*/

int **alloc_grid(int width, int height)
{
	int i = 0, j;
	char *arr;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(sizeof(int) * width * height);
	if (arr == NULL)
		return NULL;
	for (; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
