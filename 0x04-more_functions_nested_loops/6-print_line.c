#include "main.h"

/**
 * print_line - Print a separate line
 *
 * Return: no return
 *
 *@n: numbers of _ to print
*/

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
