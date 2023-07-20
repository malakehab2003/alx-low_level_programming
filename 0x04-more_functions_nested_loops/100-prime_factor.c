#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
    
	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
    
    printf("%ld\n", factor);
    return 0;
}
