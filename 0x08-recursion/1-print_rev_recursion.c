#include "main.h"

/**
 * _print_rev_recursion - print reverse string
 *
 * Return: void
 *
 * @s: the stirng to print
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
