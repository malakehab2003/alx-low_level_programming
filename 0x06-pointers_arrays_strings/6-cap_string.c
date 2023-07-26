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
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' ||
		s[i] == '\t' ||
		s[i] == '\n' ||
		s[i] == ',' ||
		s[i] == ';' ||
		s[i] == '.' ||
		s[i] == '!' ||
		s[i] == '?' ||
		s[i] == '"' ||
		s[i] == '(' ||
		s[i] == ')' ||
		s[i] == '{' ||
		s[i] == '}' ||
		i == 0)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 97;
				s[i] += 65;
			}
			else
			{
				continue;
			}
		}
		else
		{
			i++;
			continue;
		}
	}
	return (s);
}
