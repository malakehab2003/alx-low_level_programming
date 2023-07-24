#include "main.h"

/**
 * _strlen - count the length of the string
 *
 * Return: the length of the string
 *
 *@s: the string to count its length
*/

int _strlen(char *s)
{
	int i = 0, count = 0;
	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
