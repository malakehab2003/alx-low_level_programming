#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: no return
*/

void more_numbers(void)
{
	int i = 0, j = 0, count = 0;

	while (count < 10)
	{
		while (i < 1)
		{
			j = 0;
			if (i < 0)
			{
				_putchar('0' + i);
			}
			while (j <= 9)
			{
				if (i == 1 && j == 4)
				{
					break;
				}
				_putchar('0' + j);
				j++;
			}
			i++;
		}
		_putchar('\n');
		count++;
	}

}
