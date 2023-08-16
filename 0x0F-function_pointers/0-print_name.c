#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 *
 * Return: void
 *
 * @name: the name to print
 *
 * @f: the function that print the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
