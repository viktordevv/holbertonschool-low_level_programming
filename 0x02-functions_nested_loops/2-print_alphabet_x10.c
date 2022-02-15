#include "main.h"

/**
 * print_alphabet_x10 - multiplying by 10
 * Return:0 dont return from main
 */
void print_alphabet_x10(void)
{
	char m;
	int list = 0;

	while (list < 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
		_putchar(m);
		}
		_putchar('\n');
		list++;	
}
}
