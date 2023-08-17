#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "variadic_functions.h"
#include <stdlib.h>


/**
 * print_all - print all forms 
 *
 * Return: viod
 *
 * @format: the type of the data
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *s = "";

	va_list args;

	va_start(args, format);

	while (format[i] != 0)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", s, va_arg(args, char));
				break;
			case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(args, float));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", s);
				printf("%s%s", s, str);
				break;
			default:
				i++;
				continue;
		}
		i++;
		s = ", ";
	}
	printf("\n");
	va_end(args);
}
