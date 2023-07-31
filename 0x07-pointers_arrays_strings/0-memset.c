#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * Return: a pointer to the memory area s
 *
 * @s: the place to fill in
 *
 * @b: the char to fill with
 *
 * @n: the number of bytes to fill
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (;i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
