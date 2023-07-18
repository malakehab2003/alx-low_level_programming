#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_times_table - Prints the time table till n
 *
 * Return: No return
 *
 *@n: the end point
*/

void print_times_table(int n)
{
        int i = 0, j = 0, m;

        while (i <= n)
        {
                j = 0;
                while (j <= n)
                {
                        m = i * j;
                        if (m > 9)
                        {
                                _putchar((m / 10) + '0');
                                _putchar((m % 10) + '0');
                        }
                        else
                        {
                                _putchar('0' + m);
                        }
                        if (j == n)
                        {
                                _putchar('\n');
                        }
                        else
                        {
                                if (j != n)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
                        }
                        j++;
                }
                i++;
        }
}
