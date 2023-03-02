#include "main.h"

/**
 * _strncpy - copy string on string
 *
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i;
	char *s;

	s = dest;
	for(i = 0; i < n; i++)
	{
		if(*src != '\0')
			*dest = *src;
		else if (*src == '\0')
			*dest = '\0';
		dest++;
		src++;
	}
	return (s);
}
