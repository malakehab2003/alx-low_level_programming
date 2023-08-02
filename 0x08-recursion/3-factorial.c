#include "main.h"

/**
 * factorial - count the factorial of the number
 *
 * Return: the factorial of a number
 *
 * @n: the number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0)
	{
		return (1);
	}

	return (n * factorial(n - 1);
}
