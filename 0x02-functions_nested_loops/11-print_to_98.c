#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_to_98 - prints number from n to 98
 *
 * Return: No return
 *
 *@n: The number to start from
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		printf("%d", n);
	}
}
