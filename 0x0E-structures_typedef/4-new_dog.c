#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - the main funtion
 * @name: the name dog
 * @age: the age dog
 * @owner: the iwner dog
 * Return: d1
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
int nameLen, ownerLen, i;
dog_t *d1;

d1 = (dog_t *)malloc(sizeof(dog_t));
if (d1 == NULL)
return (NULL);
nameLen = ownerLen = 0;
while (name[nameLen++])
;
while (owner[ownerLen++])
;
d1->name = malloc(nameLen * sizeof(d1->name));
if (d1->name == NULL)
{
free(d1);
return (NULL);
}
for (i = 0; i <= nameLen; i++)
d1->name[i] = name[i];
d1->age = age;
d1->owner = malloc(ownerLen * sizeof(d1->owner));
if (d1->owner == NULL)
{
free(d1->name);

free(d1);
return (NULL);
}
for (i = 0; i <= ownerLen; i++)
d1->owner[i] = owner[i];
return (d1);
}
