#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialization variable of type struct dog
 * @d: pointer to struct dog to initial
 * @name: name to initial
 * @age: age to initial
 * @owner: owner to initial
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
