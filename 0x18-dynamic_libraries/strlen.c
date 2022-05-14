#include "main.h"
#include <stdio.h>

/**
 * _strlen - this is main
 * @s: this is string
 * Return: 1  this is return funtion
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
