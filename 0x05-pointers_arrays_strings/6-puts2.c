#include "main.h"
/**
* puts2 - this is residual funtion
* @str: this is the main
**/
void puts2(char *str)
{
	int le = 0;
	int lo = 0;
	char *y = str;
	int z;

	while (*y != '\0')
{
	y++;
	le++;
}
	lo = le - 1;
	for (z = 0 ; z <= lo ; z++)
{
	if (z % 2 == 0)
{
	_putchar(str[z]);
}
}
	_putchar('\n');
}
