#include "main.h"

/**
 * _memcpy - copy a memory space
 *
 * Return: the copied memory
 *
 * @dest: the destination to copy for
 * @src: the place to copy from
 * @n: the number of bytes to copy
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
