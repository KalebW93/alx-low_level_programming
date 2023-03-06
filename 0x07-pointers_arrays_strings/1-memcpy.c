#include "main.h"

/**
 * _memcpy - this function copies n bytes form memory area src to
 * memory area dest
 *
 * @dest: the destination of the bytes to be copied
 *
 * @src: the source of the bytes to be copied
 *
 * @n: the number bytes to be copied
 *
 * Return: return to the pointer of the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
