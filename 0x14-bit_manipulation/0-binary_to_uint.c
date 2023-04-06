#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to int
 *
 * @b: binary numbers in cahr data type
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);

}
