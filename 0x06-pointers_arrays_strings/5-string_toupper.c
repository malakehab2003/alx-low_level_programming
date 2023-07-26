#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 *
 * Return: uppercase text
 *
 * @s: the string
*/

char *string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 97;
			s[i] += 65;
		}
	}
	return (s);
}
