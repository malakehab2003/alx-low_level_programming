#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	int j = 0;

	while (j < 10)
	{
		while (i < 10)
		{
			putchar('0' + i);
			putchar(',');
			putchar(' ');
			i++;
		}
		j++;
		i = j;
	}
	putchar('\n');
	return (0);
}
