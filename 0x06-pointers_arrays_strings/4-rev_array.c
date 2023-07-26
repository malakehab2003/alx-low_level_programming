#include "main.h"

/**
 * reverse_array - reverse the arrange of the array
 *
 * Return: void
 *
 * @a: the array
 *
 * @n: the elements in the array
*/

void reverse_array(int *a, int n)
{
	int i = 0, t;
	int g = n - 1;

	while (i < n / 2)
	{
		t = a[g];
		a[g] = a[i];
		a[i] = t;
		i++;
		g--;
	}
}
