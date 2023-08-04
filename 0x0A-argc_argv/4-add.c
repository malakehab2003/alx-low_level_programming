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
	int countargs = 1, cpargs = 1, result = 0, num;

	if (argc <= 1)
	{
		printf("0\n");
	}

	for (; countargs < argc - 1; countargs++)
	{
		if (argv[countargs][0] < '0' || argv[countargs][0] > '9' || argv[countargs][0] < '0' || argv[countargs][0] > '9' || strlen(argv[countargs] >= 1))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (; cpargs < argc - 1; cpargs++)
	{
		num = _atoi(argv[cpargs]);
		result += num;
	}

	printf("%d", result);

	
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
