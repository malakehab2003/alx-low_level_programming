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

        while (b[len] != 0)
        {
                len++;
        }

        if (b == NULL)
        {
                return (0);
        }
        len--;
        while (len >= 0)
        {
                if (b[len] == '1')
                {
                        powercp = power;
                        while (powercp > 0)
                        {
                                count *= 2;
                                powercp--;
                        }
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

}
