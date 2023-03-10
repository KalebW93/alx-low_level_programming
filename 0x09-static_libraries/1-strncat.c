#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: char the source of strings
 * @dest: char the destination of the string
 * @n: int the number of bit to boe concatenated
 *
 * Return:the pointer to the string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; *src != '\0' && i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
