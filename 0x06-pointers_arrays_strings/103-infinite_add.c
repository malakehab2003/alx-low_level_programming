#include "main.h"
#include "atoi.c"

/**
 * infinite_add - add numbers
 *
 * Return: the number
*/

long long _atoi(char *);

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long long no1 = _atoi(n1), no2 = _atoi(n2), result, count = 0, cp, resultcp;

	result = no1 + no2;
	resultcp = result;
	
	while (result > 0)
	{
		count++;
		result /= 10;
	}
	
	if (count >= size_r)
	{
		return (0);
	}
	r[count] = '\0';
	count--;
	while (resultcp > 0)
	{
		cp = resultcp;
		r[count] = (cp % 10) - '0';
		resultcp /= 10;
		count--;
	}
	return (r);
}

/**
 * _atoi - change int into string
 *
 * Return: the intger in the string
 *
 *@s: the string to convert
*/

long long _atoi(char *s)
{
	long long i = 0, sign = 1;
	unsigned long long count = 0;

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
