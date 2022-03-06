#include "main.h"
#include <stdio.h>

/**
 * _isdigit - this is the main funtion
 * @c: this is int the main
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
