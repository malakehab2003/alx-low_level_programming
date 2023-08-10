#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * Return: array to intger
 *
 * @min: the first number in the array
 *
 * @max: the last number in the array
*/

int *array_range(int min, int max)
{
	int *arr;
	int sub = (max - min) + 1, i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * sub);
	for (; i < sub; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
