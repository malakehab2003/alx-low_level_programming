#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: no return
*/

void more_numbers(void)
{
	int i = 48, j = 48, count = 0;

	while (count < 10)
	{
		j = 0;
		while (i < 49)
		{
			if (i < 48)
			{
				_putchar(i);
			}
			while (j <= 57)
			{
				if (i == 49 && j == 52)
				{
					break;
				}
				_putchar(j);
				j++;
			}
			i++;
		}
		_putchar('\n');
		count++;
	}

}
