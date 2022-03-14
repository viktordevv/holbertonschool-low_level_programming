#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - the main funtion
 * @d: is the d
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 * Return: 0
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
