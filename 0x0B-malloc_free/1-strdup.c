#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 *
 * Return: the duplicated string
 *
 * @str: the string to duplicate
*/

char *_strdup(char *str)
{
	int i = 0;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	arr = malloc(sizeof(char) * (i + 1));
	i = 0;

	if (arr == NULL)
	{
		return (NULL);
	}

	while (str[i] != 0)
	{
		arr[i] = str[i];
		i++;
	}

	arr[i] = '\0';

	return (arr);
}
