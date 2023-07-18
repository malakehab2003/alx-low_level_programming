#include <stdio.h>
#include <unistd.h>

/**
 * print_sign - print the sign of the entered number
 *
 * Return: 1 if positive, 0 if zero, -1 is negative
 *
 *@n: the number to check
*/

int print_sign(int n)
{
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}

	else if (n > 0)
	{
		putchar('+');
		return (1);
	}
	putchar('0');
	return (0);
}
