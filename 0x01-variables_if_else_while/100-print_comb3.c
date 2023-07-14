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

	while (i < 10)
	{
	j = i + 1;
		while (j < 10)
		{
			if (i == j)
			{
				j++;
				continue;
			}
			putchar('0' + i);
			putchar('0' + j);
			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
