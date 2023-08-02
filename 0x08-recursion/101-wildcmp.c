#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (s2++ == '*')
		{
			wildcmp(s1, s2++);
		}
		if (*s1 != *s2)
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	else if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
