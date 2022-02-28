#include "main.h"

/**
 * _memset - this is main funtion
 * @s: this is pointr
 * @b: this is funt b
 * @n: this is n funt
 * Return: in s ret
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
