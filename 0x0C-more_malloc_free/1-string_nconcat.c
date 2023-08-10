#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings
 *
 * Return: pointer shall point to a newly allocated space
 *
 * @s1: the first string
 *
 * @s2: the second string
 *
 * @n: the number of chars from the second string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) <= n)
		arr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	else if (strlen(s2) > n)
		arr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (arr == NULL)
		return (NULL);
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	while (s2[j] && n)
	{
		arr[i] = s2[j];
		j++;
		n--;
		i++;
	}
	arr[i] = '\0';
	return (arr);


}
