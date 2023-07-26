#include "main.h"

/**
 * _strncpy - Entry point
 *
 * Return: the copied string
 *
 * @dest: the string to copy for
 *
 * @src: the string to copy from
 *
 * @n: the number of chars to copy
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, f = n - 1;

	dest[f] = '\0';
	while (src[i] != '\0' && n != 0)
	{
		dest[j] = src[i];
		n--;
		i++;
		j++;
	}
	return (dest);
}
