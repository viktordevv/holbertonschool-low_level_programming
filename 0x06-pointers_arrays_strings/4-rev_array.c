#include "main.h"
/**
 * reverse_array - this is reverse funtion
 * @a: this is funtion a
 * @n: this is funtion n
 */
void reverse_array(int *a, int n)
{
	int j;
	int e;

	for (j = 0; j < n--; j++)
{
	e = a[j];
	a[j] = a[n];
	a[n] = e;
}
}
