#include "main.h"

int isprime(int, int);

/**
 * is_prime_number - see if the number is prime or not
 *
 * Return: 1 if prime
 *
 * @n: the number to see if prime
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (isprime(n, n / 2));
}

int isprime(int n, int count)
{
	if (n % count == 0)
		return (0);
	if (count <= 1)
		return (1);

	return (isprime(n, count - 1);
}
