#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * times_table - Prints the time table till 9
 *
 * Return: No return
*/

void times_table(void)
{
	int i = 0, j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			_putchar('0' + (i * j));
			if ((i + j) == 20)
			{
				_putchar('$');
			}
			else
			{
				_putchar(',');
				if (((i * J) / 10) == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
}
