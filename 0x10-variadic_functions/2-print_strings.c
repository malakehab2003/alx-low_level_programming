#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - print some givin strings
 *
 * Return: void
 *
 * @n: the number of strings
 *
 * @separator: the separator between strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(args, char *));
		}
		if (separator != NULL && v != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
