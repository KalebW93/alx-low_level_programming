#include "dog.h"

/**
 * init_dog - initialize the dog struct
 *
 * @d: the struct
 * @name: dogs name
 * @age: age
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
