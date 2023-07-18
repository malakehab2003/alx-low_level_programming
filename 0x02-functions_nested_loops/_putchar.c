#include <unistd.h>
#include "main.h"

/**
 * _putchar - put the char c to stdout
 *
 * return in success 1
 * return in error -1
*/



int _putchar(char c)
{
	return (write(1, &c, 1));
}
