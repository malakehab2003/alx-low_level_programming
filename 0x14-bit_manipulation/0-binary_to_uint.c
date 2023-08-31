#include "main.h"

/**
 * binary_to_uint - binary to uint
 * @b: the binary number
 *
 * Return: decimal number
*/

unsigned int binary_to_uint(const char *b)
{
        int count = 0, len = 0, power = 0, powercp;

	if (b == NULL)
		return (0);
        while (b[len] != 0)
        {
                len++;
        }
	if (len == 0)
		return (0);

        len--;
        while (len >= 0)
        {
                if (b[len] == '1')
                {
			count += 1 << power;
                }
                else if (b[len] == '0')
                {
                        continue;
                }
                else
                {
                        return (0);
                }
                len--;
                power++;
        }
	return (count);
}
