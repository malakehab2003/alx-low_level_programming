#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute
 *
 * Return: no retutn
*/

void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i < 23)
	{
		j = 0;
		while (j < 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
