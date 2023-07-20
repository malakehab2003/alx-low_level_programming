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
	for (; size > 0; size--)
	{
		for (; size > 0; size--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
