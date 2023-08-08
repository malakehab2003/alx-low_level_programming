#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 *
 * Return:  pointer to an array of strings
 *
 * @str: the string
*/

char **strtow(char *str)
{
	int i, j = 0, f = 0;
	char **arr;

	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			for (; f < i; f++)
			{
				arr = malloc(sizeof(char) * (i - f));
				arr[j][f] = str[i];
			}
			j++;
		}
	}
	return (arr);
}
