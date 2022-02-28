#include "main.h"
/**
 * _memset - this is main
 * *s: this is point
 * @b: this is b funt
 * @n: rhis is n funt
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
