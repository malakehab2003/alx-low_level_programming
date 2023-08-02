#include "main.h"

/**
 * _sqrt_recursion - calculate the square root of the number
 *
 * Return: the square root
 *
 * @n: the number to count its square root
*/
int squareRoot(int,int);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareRoot(n, n / 2));
}

int squareRoot(int n, int count)
{
	if (count < 1)
	{
		return (-1);
	}
	if (count * count == n)
	{
		return (count);
	}
	return (squareRoot(n, count - 1));
}
