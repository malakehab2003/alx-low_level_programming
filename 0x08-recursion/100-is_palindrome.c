#include "main.h"

int _strlen_recursion(char *s);
int pal(char *s, int n, int strlen);

/**
 * is_palindrome - check if the string is empty
 *
 * Return: 1 if empty
 *
 * @s: the string
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal(s, 0, _strlen_recursion(s) - 1));
}


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

/**
 * is_palindrome - check if the string is empty
 *
 * Return: 1 if empty
 *
 * @s: the string
 *
 * @n: the number to itterate
 *
 * @strlen: the length of the string
*/

int pal(char *s, int n, int strlen)
{
	if (*(s + n) != *(s + strlen))
	{
		return (0);
	}
	if (n >= strlen)
	{
		return (1);
	}
	return (pal(s, n + 1, strlen - 1));
}
