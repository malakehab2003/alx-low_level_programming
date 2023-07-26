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
		for (; j < 53; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = a[j];
				break;
			}
		}
	}
	return (s);
}
