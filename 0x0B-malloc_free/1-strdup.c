#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - duplicate the dynamicaly allocated str
 * @str: the string
 *
 * Return: the pointer
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\n';

	return (dup);
}