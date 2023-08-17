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
	int i = 0;

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
			printf("%d%s", va_arg(args, int), separator);
		}
	}
	printf("\n");
	va_end(args);
}
