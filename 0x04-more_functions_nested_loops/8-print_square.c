#include "main.h"

/**
 * print_square - Entry point
 *
 * Return: no return
 *
 * @size: the size of the square
*/

void print_square(int size)
{
	int i = 0, j = 0;

	if (size < 1 )
	{
		_putchar('\n');
	}
	for (; i < size; i++)
	{
		for (; j  size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
