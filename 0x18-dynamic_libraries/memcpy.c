#include "main.h"

/**
 * _memcpy - this is a main funtion
 * @dest: this is char
 * @src: this is a src
 * @n: this is n funt
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
