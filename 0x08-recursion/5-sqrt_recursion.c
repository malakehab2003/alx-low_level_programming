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
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	return (squareRoot(n, 0));
}

/**
 * squareRoot - calculate the square root of the number
 *
 * Return: the square root
 *
 * @n: the number to count its square root
 *
 * @count: the number to ittirate to numbers
*/

int squareRoot(int n, int count)
{
	if (count * count > n)
	{
		return (-1);
	}
	if (count * count == n)
	{
		return (count);
	}
	return (squareRoot(n, count + 1));
}
