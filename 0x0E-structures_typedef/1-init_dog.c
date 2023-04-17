#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable `struct dog`
 * @d: struct dog
 * @name: string member name
 * @age: integer membet age
 * @owner: string for owners
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
