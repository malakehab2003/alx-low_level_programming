#include <stdio.h>
/**
 * function_run_before_main - function print before main
 *
 * Return: void
*/

void function_run_before_main(void) __attribute__((constructor));

void function_run_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
