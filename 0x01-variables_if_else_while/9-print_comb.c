#include <stdio.h>
/**
 *
 *
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

