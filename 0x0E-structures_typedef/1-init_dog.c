#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to dog name
 * @age: pointer to dog's age
 * @owner: pointer to dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

