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
	int i = 0, j = 0, count = 0, k = 0, count2 = 0;

	for (; accept[k] != '\0'; k++)
	{
		count++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (accept[j] == s[i])
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i + j])
				{
					count2++;
				}
			}
			if (count == count2)
			{
				return (&s[i]);
			}
			if (s[i + 1] == '\0')
			{
				return (0);
			}
		}
	}
	return (0);
}
