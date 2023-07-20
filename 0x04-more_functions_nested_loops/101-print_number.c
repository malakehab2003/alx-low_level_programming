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
	int reversed = 0;
	int digit;
	int is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
    	{
		if (n < 0)
		{
			is_negative = 1;
			n = -n;
		}

		while (n > 0)
		{
			digit = n % 10;
			reversed = reversed * 10 + digit;
			n /= 10;
		}

		if (is_negative)
		{
			_putchar('-');
		}

		while (reversed > 0)
		{
			digit = reversed % 10;
			_putchar('0' + digit);
			reversed /= 10;
		}

		_putchar('\n');
	}
}

