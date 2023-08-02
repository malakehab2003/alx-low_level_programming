#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * Return: void
 *
 * @s: the string to print
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(*(s) + 1); 
	}
}
