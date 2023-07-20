#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 *
 * Return: no return
 *
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int i = 1, col = 1, j = size - 1, cosize = size;


	if (size < 1)
		_putchar('\n');
	for (; col <= size; col++)
	{
		i = 1;
		for (; i <= size - col; i++)
		{
			_putchar(' ');
		}
		j = size - 1;
		for (; j < cosize; j++)
		{
			if (cosize == 2 * size)
			{
				break;
			}
			_putchar('#');
		}
		cosize++;
		_putchar('\n');
	}
}
