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

	while (i <= 99)
	{
		j = i;
		while (j <= 99)
		{
			if (i == j)
			{
				j++;
				continue;
			}
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i < 99 || j < 98)
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
