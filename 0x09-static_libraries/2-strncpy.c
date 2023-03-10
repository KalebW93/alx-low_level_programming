#include "main.h"

/**
 * _strncpy - copy string on string
 *
 * @dest:char the destination of string to be copied
 * @src:char the source of string to be copied
 * @n: int the number of bytes to be copied
 *
 * Return: the pointer to the sting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *s;

	s = dest;
	for (i = 0; i < n && *src; i++)
	{
		if (*src != '\0')
			*dest = *src;
		dest++;
		src++;
	}
	for (; i < n; i++)
	{
		*dest = '\0';
		dest++;
	}
	return (s);
}
