#include "main.h"
/**
 * _strncat - this is main funtion
 * @dest: this is my destiny
 * @src: this is src funt
 * @n: this is n funti
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int j;

	p = 0;
	while (dest[p] != '\0')

	p++;

	j = 0;
	while (j < n && src[j] != '\0')
{
	dest[p] = src[j];
	p++;
	j++;
}
	dest[p] = '\0';
	return (dest);
}
