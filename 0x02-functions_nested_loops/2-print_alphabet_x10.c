#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet in lower case 10 times
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int alpha = 0, count = 0;

	while (count < 10)
	{
		while (alpha < 26)
		{
			putchar('a' + alpha);
			alpha++;
		}
		putchar('\n');
		count++;
	}
	return (0);
}
