#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the new dog
 * @d: pointer to the struct of the dog
 * @name: its name
 * @age: its age
 * @owner: The owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
