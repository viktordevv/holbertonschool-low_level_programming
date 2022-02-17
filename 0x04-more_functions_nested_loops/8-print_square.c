#include "main.h"
/**
 * print_square - this is the main funtion
 *@size: the square #
 */
void print_square(int size)
{
	int c, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 0; c < size; c++)
{
	for (p = 0; p < size; p++)

	{		_putchar('#');
	}

		_putchar('\n');
}
}
