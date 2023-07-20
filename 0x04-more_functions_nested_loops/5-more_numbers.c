#include "main.h"

/**
 * more_numbers - Print numbers form 0 to 14 10 times
 *
 * Return: No return
*/

void more_numbers(void)
{
	int i = 0, count = 0;

	for (; count < 10; count++)
	{
		i = 0;
		for (; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
