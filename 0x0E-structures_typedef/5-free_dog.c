#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog type
 * @d: memory space to be freed
 * Return: nohting
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
