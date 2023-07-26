#include "main.h"

/**
 * leet - to code the text
 *
 * Return: coded text
 *
 * @s: string to code
*/

char *leet(char *s)
{
	int i = 0, j = 0;
	char ss[] = "aAeEoOtTlL"
	char n[] = "4433007711"

	while (s[i] != '\0')
	{
		while (j < 10)
		{
			if (s[i] == ss[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
