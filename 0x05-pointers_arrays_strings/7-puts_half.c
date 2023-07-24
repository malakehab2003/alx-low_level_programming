#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - Entry point
 *
 * Return: void
 *
 *@str: 
*/

void puts_half(char *str)
{
	int i = _strlen(str);

	if (i % 2== 0)
	{
		i /=2;
		while(str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (i - 1) / 2;
		while(str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
