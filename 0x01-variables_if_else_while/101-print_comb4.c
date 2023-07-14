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

	int f = 0;

	while (i < 10)
	{
	j = i + 1;
		while (j < 10)
		{
		f = j + 1;
			while (f < 10)
			{
				if (i == j || i == f || j == f)
				{
					f++;
					continue;
				}
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + f);
				if (f + j + i != 24)
				{
					putchar(',');
					putchar(' ');
				}
			f++;
			}
		j++;
		}
	i++;
	}
	putchar('\n');
	return (0);
}
