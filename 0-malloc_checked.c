#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_cheked - this allocate and check the allocation
 * @b: size of memory to be allocated
 *
 * Return: the address if it iss succesfulor 98 for termination
 */
void *malloc_checked(unsigned int b)
{
	void *i;
	
	i = malloc(b);
	if(i == NULL)
		exit(98);
	return (i);
}

