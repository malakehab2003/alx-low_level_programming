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
	int siz = size(s) - 1;

	while (siz > 0)
	{
		_putchar(*(s + siz));
		siz--;
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
