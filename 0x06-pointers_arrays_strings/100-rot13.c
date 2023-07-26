#include "main.h"

/**
 * rot13 - encodes the alphabet
 *
 * Return: encoded text
 *
 * @s: the string
*/

char *rot13(char *s)
{
	int i = 0, j = 0;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; s[i] != '\0'; i++)
	{
	j = 0;
		for (; j < (26 * 2); j++)
		{
			if (s[i] == b[j])
			{
				s[i] = a[j];
			}
		}
	}
	return (s);
}
