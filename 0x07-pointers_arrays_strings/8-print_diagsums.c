#include "main.h"


/**
 * print_diagsums - Entry point
 *
 * Return: void
 *
 * @a: the array to count
 *
 * @size: the size of the array
*/

void print_diagsums(int *a, int size)
{
	int i, j, count = 0;

	for (i = 0, j = 0; i < size && j < size; i++, j++)
	{
		count += a[i][j];
	}


	for (i = size - 1, j = size - 1, count = 0; i < 0 && j < 0; i--, j--)
	{
		count += a[i][j];
	}
}
