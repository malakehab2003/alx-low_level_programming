#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

int isnum(char *s);
int _atoi(char *s);
void _puts(char *str);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char *f = argv[1], *s = argv[2];
	unsigned int fi, se;

	if (argc != 3 || !isnum(f) || !isnum(s))
	{
		_puts("Error");
		exit(98);
	}
	fi = _atoi(f);
	se = _atoi(s);
	_puts("%d", se * fi);

	return (0);
}

int isnum(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
