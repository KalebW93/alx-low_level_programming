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
	unsigned int i, j, k;


	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
			;
	}
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	if (j > n)
		j = n;
	for (k = 0; k < i; k++)
		str[k] = s1[k];
	for (k = 0; k < j; k++)
		str[k + i] = s2[k];
	str[i + k] = '\0';
	return (str);
}
