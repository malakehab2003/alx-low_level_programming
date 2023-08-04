#include <stdio.h>
#include <unistd.h>
#include "main.h"

int _atoi(char *s);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * @argc: the number of the arguments
 *
 * @argv: the arguments
*/

int main(int argc, char *argv[])
{
	int first, second;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	first = _atoi(argv[1]);
	second = _atoi(argv[2]);
	printf("%d\n", first * second);

	return (0);
}

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
