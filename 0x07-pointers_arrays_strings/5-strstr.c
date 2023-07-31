#include "main.h"

/**
 * _strstr - find string in a string
 *
 * Return: a pointer to the string
 *
 * @haystack: the string to search in
 *
 * @needle: the string to search for
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, count = 0, count2 = 0, k = 0;

	for (; needle[k] != '\0'; k++)
	{
		count++;
	}

	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j = 0;
			count2 = 0;
			for (; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					count2++;
				}
			}
			if (count == count2)
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
