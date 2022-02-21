#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int lo = 0;
	int p;

	while (*s != '\0')
	{
		lo++;
		s++;
	}
		s--;
		for (p = lo; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

		_putchar('\n');
}
