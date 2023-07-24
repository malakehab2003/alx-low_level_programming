#include "main.h"

int size(char *s);

/**
 * print_rev - prints the reverse of the string
 *
 * Return: void
 *
 *@s: the string to print
*/

void print_rev(char *s)
{
	int size = size(char *s);

	while (size > -1)
	{
		_putchar(*(s + size));
		size--;
	}

	_putchar('\n');
}

/**
 * size - count the length of the string
 *
 * Return: the length of the string
 *
 *@s: the string to count its length
*/

int size(char *s)
{
	int i = 0, count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
