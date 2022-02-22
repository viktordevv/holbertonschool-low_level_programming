#include "main.h"
/**
 * puts_half - this is main funtion
 * @str: this is string funtion
 */
void puts_half(char *str)
{
	int u, p;
	int len = 0;
	
	for (u = 0; str[u] != '\0'; u++)
	len++;

	p = (len / 2);

	if ((len % 2) == 1)
	p = ((len + 1) / 2);

	for (u = p; str[u] != '\0'; u++)
	_putchar(str[u]);
	_putchar('\n');
}
