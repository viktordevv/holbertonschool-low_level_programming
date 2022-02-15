#include "main.h"
/**
 * jack_bauer - function to hours in day
 * Return: the minutes life
 */
void jack_bauer(void)
{
	int t = 0;
	int m = 0;

	while (t < 24)
	{
	while (m < 60)
	{
		_putchar('0' + (t / 10));
		_putchar('0' + (t % 10));
		_putchar(':');
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
		_putchar('\n');
		m++;
	}
		m = 0;
		t++;
}
}
