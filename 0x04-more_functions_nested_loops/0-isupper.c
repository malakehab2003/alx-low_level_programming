#include "main.h"

/**
 * _isupper - check is the char is upper case or not
 *
 * Return: 1 is upper
 *and 0 otherwise
 *
 *@c: is the char to check is upper
*/

int _isupper(int c)
{
	int i = 65;

	while (i <= 90)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
