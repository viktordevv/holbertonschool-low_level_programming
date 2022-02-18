#include "main.h"
/**
* print_triangle - this is a cute piramide
* @size: the god is great
*/
void print_triangle(int size)
{
	int f, c, l;

	if (size <= 0)
		_putchar('\n');
	for (f = 0; f < size; f++)
	{
		for (c = size - f; c > 1; c--)
			_putchar(' ');
		for (l = f + c; l >= 1; l--)
			_putchar('#');
		_putchar('\n');
	}
}
