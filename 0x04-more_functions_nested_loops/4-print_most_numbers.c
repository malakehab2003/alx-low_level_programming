#include "main.h"

/**
 * print_most_numbers - Print numbers except 2 and 4
 *
 * Return: no return
*/

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
