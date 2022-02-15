#include "main.h"
/**
 * print_to_98 - print numberss
 * @a: the 1 to 98
 */
void print_to_98(int a)
{
	if (a > 98)
	for (; a > 98; a--)
		{
		printf("%d, ", a);
		}
	else if (a < 98)
	{
	for (; a < 98; a++)
		{
		printf("%d, ", a);
		}
	}
		printf("%d\n", a);
}
