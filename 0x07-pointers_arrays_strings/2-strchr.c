#include "main.h"

/**
 * _strchr - search for a char in a string
 *
 * Return: a pointer to the first occurrence of the char c
 *
 * @s: the string to search in
 *
 * @c: the char to search for
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
