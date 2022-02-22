#include "main.h"
/**
* print_array - this is the print funtion
* @a: this print a
* @n: this is print n
**/
void print_array(int *a, int n)
{
	int q;

	for (q = 0 ; q < n; q++)
{
	printf("%d", a[q]);
	if (q != n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
