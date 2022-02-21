#include "main.h"
#include <stdio.h>

/**
 * swap_int - this is main values
 * @a: this a funticon a
 * @b: this is b funtion
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
