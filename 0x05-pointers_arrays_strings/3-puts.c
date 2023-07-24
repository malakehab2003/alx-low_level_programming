#include "main.h"

/**
 * _puts - print value
 *
 * Return: void
 *
 *@str: the value to print
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
