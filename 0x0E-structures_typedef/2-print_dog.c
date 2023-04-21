#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
<<<<<<< HEAD
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 * Description: print dog details
 */
=======


/**
  * print_dog - prints a struct dog
  * @d: struct dog to print
  * Description: dog details
  */
>>>>>>> cb651ed2e8264d5c4f463f5894af3775a35b19b1
	void print_dog(struct dog *d)
	{
		if (d == NULL)
			return;

		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
