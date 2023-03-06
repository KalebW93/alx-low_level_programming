#include "main.h"
#include <stddef.h>

/**
 * _strchr - this fucntion returns the first occuranc of the
 *  character in variable c
 *  @s: the string to be checked
 *
 *  @c: the character to be searched in the string
 *
 *  Return: reterurn to the memory location s or Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
