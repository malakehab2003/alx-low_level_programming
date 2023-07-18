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
	int i = 0, j = 0, m;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			m = i * j;
			if (m > 9)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				if (j != 9)
				{
					_putchar(',');
					if ((m <= 9))
					{
						_putchar(' ');
					}
				}
			}
			j++;
		}
		i++;
	}
}
