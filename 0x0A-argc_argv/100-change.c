#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

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
	int cents = atoi(argv[1]), count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}
	while (cents >= 25)
	{
		count++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		count++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		count++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		count++;
		cents -= 2;
	}
	while (cents != 0)
	{
		count++;
		cents--;
	}
	printf("%d\n", count);
	return (0);
}
