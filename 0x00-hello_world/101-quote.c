#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (int i = 0; i < sizeof(str) / sizeof(str[0]); i++)
	{
		putchar(str[i]);
	}
	return (1);
}
