#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - the main funtion
 * @d: this is d funtion
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
else
{
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
