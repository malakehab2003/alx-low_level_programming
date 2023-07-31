#include "main.h"

/**
 * strspn -  gets the length of a prefix substring
 *
 * Return:  the number of bytes in the initial segment of s which consist only of bytes from accept
 *
 * @s: the string to search for the substring
 *
 * @accept: the substring to search for
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
