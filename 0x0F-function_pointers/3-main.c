#include <stdio.h>
#include <unistd.h>
#include "3-calc.h"
#include "3-op_functions.c"
#include "3-get_op_func.c"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * @argc: number of arguments
 *
 * @argv: the arguments
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1 = atoi(argv[1]),  n2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));



	return (0);
}
