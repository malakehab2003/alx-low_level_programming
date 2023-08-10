#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

int isnum(char *s);

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
		printf("Error\n");
		exit(98);
	}
	fi = atoi(f);
	se = atoi(s);
	printf("%d\n", se * fi);

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
