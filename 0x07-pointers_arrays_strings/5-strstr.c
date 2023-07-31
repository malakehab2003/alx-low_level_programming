#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, count = 0, count2 = 0, k = 0;

	for (;needle[k] != '\0'; k++)
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
