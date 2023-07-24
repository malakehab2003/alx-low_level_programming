#include "main.h"

/**
 * puts2 - put string put the other char only
 *
 * Return: void
 *
 * @str: the string
*/

void puts2(char *str)
{
	int x = 0;

	while (*(str + i) != '\0')
	{
		if ((i / 2) == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
