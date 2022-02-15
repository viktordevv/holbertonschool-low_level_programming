#include "main.h"
/**
 * times_table - is multiply
 * @void is a table multiply
 */
void times_table(void)
{
	int o, p, l;

	for (o = 0; o < 10; o++)
	{
		for (p = 0; p < 10; p++)
		{
			l = p * o;
			if (p == 0)
			{
				_putchar(l + '0');
			}

			if (l < 10 && p != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
