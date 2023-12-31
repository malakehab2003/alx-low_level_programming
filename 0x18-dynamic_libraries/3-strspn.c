#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * Return:  the number of bytes in the substring
 *
 * @s: the string to search for the substring
 *
 * @accept: the substring to search for
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0;

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		for (; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
	}
	return (count);
}
