#include <stdio.h>

/**
 * _islower - check is c char is lower or not
 *
 * Return: 1 is lower
 * otherwise return 0
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
	}
	return (0);
}
