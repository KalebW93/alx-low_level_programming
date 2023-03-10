#include "main.h"

/**
 * _strcmp - a function which compare to function
 *
 * @s1: char points to the first string to be passed
 * @s2: char points to the second string to be passed
 *
 * Return: the ASCII difference if they are not similar else return 0
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			n = *s1 - *s2;
			return (n);
		}
		s1++;
		s2++;
	}
	return (0);
}
