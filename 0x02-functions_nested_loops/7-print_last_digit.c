#include "main.h"
/**
 * print_last_digit - print all this
 * @n: need all digits
 * Return: q is hard
 */
int print_last_digit(int n)
{
	int q;

	if (n < 0)
		n = -n;

	q = n % 10;

	if (q < 0)
		q = -q;

	_putchar(q + '0');

	return (q);
}
