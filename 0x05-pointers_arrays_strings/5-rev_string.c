#include "main.h"
#include "2-strlen.c"
/**
 * rev_string - reverse a string
 *
 * Return: void
 *
 * @s: the string to reverse
*/

void rev_string(char *s)
{
	int i = 0, c = _strlen(s) - 1, p;

	while (i < c)
	{
		p = *(s + c);
		*(s + i) = *(s + c);
		*(s + c) = p;
		i++;
		c--;
	}
}
