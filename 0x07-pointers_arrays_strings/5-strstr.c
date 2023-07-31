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
	int i = 0;

	for (; haystack[i] != '\0'; i++)
	{
		char *f = haystack;
		char *a = needle;

		while (*a == *f && *a == != '\0')
		{
			f++;
			a++;
		}
		if (*a == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
