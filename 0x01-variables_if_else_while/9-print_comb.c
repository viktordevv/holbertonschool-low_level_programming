#include <stdio.h>

/**
 * main -This prints up to 9
 * Then of so much if you print
 * Return:0 there is no way back
 */
int main(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
{	putchar(p);
	if (p != '9')
{
	putchar(',');
	putchar(' ');
}
}
	putchar ('\n');
	return (0);
}
