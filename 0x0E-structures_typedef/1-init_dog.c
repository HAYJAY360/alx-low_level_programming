#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type structure dog.
 * @d: The dog.
 * @name: The name of the dog.
 * @owner: The owner of the dog.
 * @age: The age of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
