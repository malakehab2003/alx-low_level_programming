#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/


int main() {
	int fib[50] = {1, 2};
	int i = 2;
	while (i < 50)
	{
		fib[i] = fib[i-1] + fib[i-2];
		i++;
	}
	int j = 0;
	while (j < 49)
	{
		printf("%d, ", fib[j]);
		j++;
	}
	printf("%d\n", fib[49]);
	return (0);
}
