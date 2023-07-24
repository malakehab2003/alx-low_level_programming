#include "main.h"

/**
 * main - change int into string
 *
 * Return: the intger in the string
 *
 *@s: the string to convert
*/

int _atoi(char *s)
{
	int i = 0, j = 48, count = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			while (j <= 57)
			{
				if (s[i] == j)
				{
					count += j;
				}
				count *= 10;
				j++;
			}
		}
		i++;
	}
	return (count);

}
