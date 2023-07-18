#include <stdio.h>
#include <unistd.h>

/**
 * _isalpha - check if the char c is alpha or not
 *
 * Return: 1 if the char is alpha
 * otherwise: 0 otherwise
 *
 * @c: the char to check if alpha or not
*/

int _isalpha(int c)
{
	int i = 97, j = 65;

	while (i < 123)
	{
		if (i == c)
		{
			return (1);
		}
		i++;
	}

	while (j < 91)
	{
		if (j == c)
		{
			return (1);
		}
		j++;
	}

	return (0);
}
