#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - cancatenate ps1 and part of s2
 * @s1: point to the first stirng
 * @s2: point to the second string to be concatnated
 * @n: number of charactrs to be concatinated
 *
 * Return:return the pointer to the postion of
 * concatinated stiring.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i = 0, j = 0;
	unsigned int k;

	str = malloc(sizeof(s1) + n);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	if (n >= strlen(s2))
	{
		while (s2[j] != '\0')
		{
			str[i + j] = s2[j];
			j++;
		}
		str[i + j] = '\0';
		return (str);
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			str[i + k] = s2[k];
		}
		str[i + n] = '\0';
		return (str);
	}
}
