#include "main.h"
#include <stdio.h>


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
	int i, main_sum = 0, secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_sum += *(a + i * size + i);
	}

	for (i = 0; i < size; i++)
	{
		secondary_sum += *(a + (i + 1) * size - i - 1);
	}

	printf("%d, %d\n", main_sum, secondary_sum);
}
