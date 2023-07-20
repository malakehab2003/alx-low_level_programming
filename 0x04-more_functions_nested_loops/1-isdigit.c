#include "main.h"

/**
 * _isdigit - check if c char is digit or not
 *
 * Return: 1 if c is digit
 * otherwise return 0
 *
 *@c: the char to check if digit
*/

int _isdigit(int c)
{
	int i = 48;

	while (i <= 57)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
