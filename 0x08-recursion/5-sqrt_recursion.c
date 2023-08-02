#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of the number
 *
 * Return: the square root
 *
 * @n: the number to count its square root
*/

int _sqrt_recursion(int n)
{
	int i = n / 2;

	if (n < 1)
	{
		return (-1);
	}
	if (i * i != n)
	{
		_sqrt_recursion(i - 1);
	}
	return (i);
}
