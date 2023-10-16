#include "main.h"

/**
 * _strncat - concatenates two strings but with limit n
 *
 * Return: the concatenated string
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: the limit of concatination
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	dest[i] = '\0';

	return (dest);
}
