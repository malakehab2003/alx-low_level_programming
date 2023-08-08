#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * Return: concatenated string
 *
 * @s1: the first string
 *
 * @s2: the last string
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, count = 0;
	char *arr;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != 0)
	{
		count++;
		i++;
	}
	i = 0;
	while (s2[i] != 0)
	{
		count++;
		i++;
	}
	count++;
	arr = malloc(sizeof(char) * count);
	if (arr == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s1[i] != 0)
	{
		arr[count] = s1[i];
		i++;
		count++;
	}
	i = 0;
	while (s2[i] != 0)
	{
		arr[count] = s2[i];
		i++;
		count++;
	}
	arr[count] = '\0';
	return (arr);
}
