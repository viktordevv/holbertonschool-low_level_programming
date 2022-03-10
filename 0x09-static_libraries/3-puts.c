#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - this function print with puts but don't move the cursor to next line
 *@s: the parameter
 *
 *
 * Return: Always 0.
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
