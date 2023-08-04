#include "main.h"

/**
 * _atoi - change int into string
 *
 * Return: the intger in the string
 *
 *@s: the string to convert
*/

int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && count == 0)
		{
			sign *= -1;
		}
		else if (s[i] == '+' && count == 0)
		{
			sign *= 1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			count = count * 10 + (s[i] - '0');
		}
		else if (count > 0)
		{
			break;
		}
		i++;
	}
	return (count * sign);
}
