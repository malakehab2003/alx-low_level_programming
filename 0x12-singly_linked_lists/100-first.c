#include <stdio.h>

/**
 * function - function print before main
 *
 * Return: void
*/

void function(void)__attribute__((constructor));

void function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
