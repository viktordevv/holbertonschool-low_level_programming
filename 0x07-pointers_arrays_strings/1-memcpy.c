#include "main.h"
/**
 * _memcpy - this is main funt
 * @dest: this is char
 * @src: this is a src
 * @n: this is n funt
 * return: dest is a return
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
