#include "main.h"

/**
 */
char *_memeset(char *s, char b, unsigned int n)
{
	char *c;
	unsigned i;

	while(i < n)
	{
		*c = b;
		c++;
		i++;
	}
	s = c;
	return (s);
}
