#include <stdio.h>
#include <unistd.h>
#include "main.h"

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

	arr = malloc(sizeof(char) * i);
	i = 0;

	if (arr == NULL)
	{
		return (NULL);
	}

	while (str[i] != 0)
	{
		arr[i] = str[i];
		i++:
	}

	return (arr);
}
