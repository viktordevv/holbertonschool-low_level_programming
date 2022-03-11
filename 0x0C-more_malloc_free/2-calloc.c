#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this is main funtion
 * @nmemb: this is nmemb
 * @size: this is size
 * Return: str
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int l;
char *str;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
str = malloc(nmemb * size);
if (!str)
{
return (NULL);
}
for (l = 0; l < nmemb * size; l++)
{
str[l] = 0;
}
return (str);
}
