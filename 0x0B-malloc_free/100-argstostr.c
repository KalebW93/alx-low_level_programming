#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the argumenats
 * of your program
 * @ac: number of argumetnts
 * @av: the string passed as arguments
 *
 * Return: a pointer to the main
 */
char *argstostr(int ac, char **av)
{
	char *s, *t;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		t = av[i];
		j = 0;

		while (t[j++])
			len++;
		len++;

	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[i] = av[i][j];
			j++;
		}
		s[i] = '\n';
	}
	return (s);
}
