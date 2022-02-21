#include "main.h"
/**
 * _puts - this is main funtion
 * @str: this is a string cute
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	{
		_putchar('\n');
	}
}
