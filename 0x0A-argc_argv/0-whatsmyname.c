#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0;argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
}
