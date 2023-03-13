#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - this concat the string
 * @s1: the first string to be merged
 * @s2: the seconde string to be merged
 *
 * Return: the concated string(pointer)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len = 0, i = 0;

	s3 = malloc(sizeof(s1) + sizeof(s2) - 1);
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[len] != '\0')
	{
		s3[len] = s1[len];
		len++;

	}
	while (s2[i] != '\0')
	{
		s3[len + i] = s2[i];
		i++;
	}
	s3[len + i + 1] = '\0';
	return (s3);
}
