#include "main.h"

/**
 * _strlen_recursion - get the  length of the string
 *
 * Return: length of the string
 *
 * @s: the string
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}
	count++;
	return (count + _strlen_recursion(s + 1));
}
