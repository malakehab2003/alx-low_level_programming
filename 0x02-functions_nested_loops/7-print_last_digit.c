#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - print the last digit in any number
 *
 * Return: the last digit of the number
 *
 *@n: the number to print its last digit
*/

int print_last_digit(int n)
{
	int l = (n % 10);

	_putchar(l + '0');
	return (l);
}
