#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
int _putchar(char c);

#endif

int _putchar(char c)
{
	return (write (1, &c , 1));
}
