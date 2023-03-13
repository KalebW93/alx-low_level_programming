#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - crate dynamic array with the specfic size
 * @size: size created array
 * @c: initalizing character
 *
 * Return: return pointer to  buffer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(c) * size);
	if  (ptr == NULL)
	{
		printf("Can't alloate %ld bytes (after %d calls)\n", sizeof(c) * size, i);
			return (ptr);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
