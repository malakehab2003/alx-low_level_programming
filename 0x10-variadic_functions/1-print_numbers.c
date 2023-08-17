#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - print some numbers
 *
 * Return: void
 *
 * @separator: the separator of the numbers
 *
 * @n: number of the numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	va_start(args, n);

	if (separator == NULL)
	{
		for (; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
	}
	else
	{
		for (; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
			{
				printf("%d", va_arg(args, int));
			}
		}
	}
	printf("\n");
	va_end(args);
}
