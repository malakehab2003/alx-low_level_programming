#include "main.h"

/**
 * set_string - make the pointer to a pointer
 *
 * Return: void
 *
 * @s: the pointer to set
 *
 * @to: the pointer to set to
*/

void set_string(char **s, char *to)
{
	*s = to;
}
