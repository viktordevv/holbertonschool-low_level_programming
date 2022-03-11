#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - this is main funtion
 * @b: this is b funtion
 * @return a
 */
void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
{
exit(98);
}
else
{
return (a);
}
}
