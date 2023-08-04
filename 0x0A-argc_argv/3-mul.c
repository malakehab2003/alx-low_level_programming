#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include "atoi.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, first, second;

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
