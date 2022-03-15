#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - this is main funtion
 * @d: this is d funtion
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
