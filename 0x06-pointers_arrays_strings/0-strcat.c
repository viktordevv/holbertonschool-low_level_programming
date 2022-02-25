#include "main.h"
/**
 * _strcat - this is main funtion
 * @dest: is my destiny
 * @src: this is src funtion
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int hello = 0, world = 0;

	while (dest[hello] != '\0')
	{
		hello++;
	}
	while ((dest[hello + world] = *src++) != '\0')
	{
		world++;
	}
	return (dest);
}
