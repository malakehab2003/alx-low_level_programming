#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum all numbers
 *
 * Return: the sum of the numbers
 *
 * @n: the number of the numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list li;
	va_start(li, n);

	unsigned int i = 0, result = 0;

	for (; i < n; i++)
	{
		result += va_arg(li, int);
	}
	va_end(li);
	return (result);
}
