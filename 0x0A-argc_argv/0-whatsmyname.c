#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, j;
	char slach = '/';
	char *name = argv[0];

	for (j = 0; argv[0][j] != '\0'; j++)
	{
		if (argv[0][j] == slach)
		{
			name = argv[0][j] + 1;
		}
	}
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(*name);
	}
}
