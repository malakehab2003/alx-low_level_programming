#include "main.h"
#include <stdio.h>

/**
 * print_array - print number of elements
 *
 * Return: void
 *
 * @a: the array
 *@n: the number of elements to print
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (a[i] != '\n')
		{
			printf("%d", a[i]);
			if (i != n)
			{
				printf(", ");
			}
		}
		i++;
	}
	printf("\n");
}
