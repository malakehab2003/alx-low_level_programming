#include "main.h"
#include "atoi.c"

/**
 * infinite_add - add numbers
 *
 * Return: the number
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int no1 = _atoi(n1), no2 = _atoi(n2), result, count = 0, cp, resultcp;

	result = no1 + no2;
	resultcp = result;
	
	while (result > 0)
	{
		count++;
		result /= 10;
	}
	
	if (count >= size_r)
	{
		return (0);
	}

	count--;
	while (resultcp > 0)
	{
		cp = resultcp;
		r[count] = cp % 10 + '0';
		result /= 10;
		count--;
	}
	return (r);
}
