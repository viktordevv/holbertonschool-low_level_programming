#include "main.h"

/**
 * print_sign - print greater and negative
 * @n: this is the sign
 * Return: 0 in zero
 */

int print_sign(int n)

{
	if  (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
