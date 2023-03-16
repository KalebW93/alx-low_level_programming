#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates arrays with element
 * @nmemb: number of elemets in  array
 * @size: size of each array element
 *
 * Return:  an array with allocated size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int b;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (b = 0; b < (size * nmemb); b++)
		arr[b] = 0;
	return (arr);
}
