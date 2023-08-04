#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		printf("%s", argv[0][i]);
	}
}
