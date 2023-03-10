#include "main.h"

/**
 * _memset - This function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 *
 * @s: This is the pointer which point to the memory location
 * that is to be filed by constant byte b
 *
 * @b: The variable which store the constant b
 *
 * @n: The number of byte to be filled
 *
 * Return: the pointer will be returned to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
