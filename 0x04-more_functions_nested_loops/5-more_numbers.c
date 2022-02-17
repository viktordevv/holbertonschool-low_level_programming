#include "main.h"

/**
* more_numbers - this is the main funtion
*/
void more_numbers(void)
{
	int x;
	char p;

	for (x = 0; x < 10; x++)
	{
	for (p = 0; p <= 14; p++)
	{
		if (p > 9)
		_putchar((p / 10) + '0');
		_putchar((p % 10) + '0');
	}
		_putchar('\n');
	}
}
