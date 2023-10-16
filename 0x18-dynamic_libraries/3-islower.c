#include <stdio.h>

/**
 * _islower - check is c char is lower or not
 *
 * Return: 1 is lower
 * otherwise return 0
 *
 *@c: the char to check if it lower case or not
*/

int _islower(char c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
