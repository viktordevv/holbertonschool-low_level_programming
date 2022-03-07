#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - this is main funtion
 * @size: this is size funtion
 * @c: this is c funtion
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int p;

array = malloc(sizeof(char) * size);

if (size == 0 || array == NULL)
return (NULL);

for (size p = 0; p < size; p++)
array[p] = c;
return (array);
}
