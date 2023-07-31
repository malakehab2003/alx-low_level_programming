#include "main.h"

/**
 * _strpbrk - search for a string in the givin string
 *
 * Return: the match of the searching string in the main string
 *
 * @s: the string to search in
 *
 * @accept: the string to search for
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
