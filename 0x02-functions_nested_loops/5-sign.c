#include "main.h"

/**
 * main - print greater and negative
 * Return: 0 in zero
 i*/

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
