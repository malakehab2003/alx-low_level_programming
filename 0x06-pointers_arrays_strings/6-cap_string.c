#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * Return: capitalized string
 *
 * @s: the string to capitalize
*/

char *cap_string(char *s)
{
	int i = 0, j;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' ||
		s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
		s[i] == '?' || s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			j = i + 1;

			if (s[j] >= 97 && s[j] <= 122)
			{
				s[j] -= 97;
				s[j] += 65;
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 97;
		s[0] += 65;
	}
	return (s);
}
