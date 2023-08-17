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

	char *str;

	va_start(args, n);

	for (; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
