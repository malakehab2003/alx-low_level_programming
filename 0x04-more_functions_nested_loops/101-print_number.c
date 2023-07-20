#include "main.h"

/**
 * print_number - Print a number with char
 *
 * Return: no return
 *
 * @n: the number to print
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}

	_putchar('0' + num % 10);
}
