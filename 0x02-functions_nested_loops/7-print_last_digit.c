#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - print the last digit in any number
 *
 * Return: the last digit of the number
 *
 *@n: the number to print its last digit
*/

int print_last_digit(int n)
{
	return (n % 10);
}
