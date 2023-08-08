#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * Return: string of concatenated arguments
 *
 * @ac: the number of the arguments
 *
 * @av: the strings
*/

char *argstostr(int ac, char **av)
{
	int i, count = 0, index = 0, len;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		count += strlen(av[i]) + 1;
	arr = malloc(sizeof(char) * count + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strncpy(arr + index, av[i], len);
		infex += len;
		arr[index] = '\n';
		index++;
	}
	arr[count] = '\0';
	return (arr);
}
