#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog struct
 * @name: its name
 * @age: its age
 * @owner: its owner
 * @d: struct dog pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
