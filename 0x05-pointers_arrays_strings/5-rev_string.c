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

	while (i < (_strlen(s) / 2))
	{
		p = *(s + c);
		*(s + c) = *(s + i);
		*(s + i) = p;
		i++;
		c--;
	}
}
