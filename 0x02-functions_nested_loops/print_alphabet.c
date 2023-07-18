#include <unistd.h>
#include <stdio.h>


/**
 * print_alphabet - prints all the alphabets in lower case 
 *
 * Return: 0 when success
*/


void print_alphabet(void)
{
	int i = 0;
	while (i < 26)
	{
		putchar('a' + i);
		i++;
	}
	putchar('\n');
}
