#include "main.h"

/**
 * swap_int - swap two int values
 *
 * Return: void
 *
 *@a: first value to swap
 *@b: second value to swap
*/

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
