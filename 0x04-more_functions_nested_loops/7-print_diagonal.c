#include "main.h"
/**
* print_diagonal - this is the main funtion
* @n: here is the n
*/
void print_diagonal(int n)
{
	int c, f;

	if (n <= 0)
	_putchar('\n');
	for (c = 0; c <  n; c++)
	{
		for (f = 0; f <= c; f++)
	{
		if (c == f)
	{
		_putchar('\\');
		_putchar('\n');
	}
		else
	{	_putchar(' ');
	}
	}
	}
}
