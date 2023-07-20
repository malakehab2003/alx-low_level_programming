#include "main.h"

/**
 * print_diagonal - print a diagonal
 *
 * Return: no return
 *
 * @n: number of the diagonal
*/

void print_diagonal(int n)
{
	int i = 0, j = n;

	for (; n > 0; n--)
	{
		i = 0;
		for (; i < j - n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
