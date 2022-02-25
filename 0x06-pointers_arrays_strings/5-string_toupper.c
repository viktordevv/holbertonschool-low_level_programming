#include "main.h"
/**
 * string_toupper - this is touper funt
 * @n: this is n funt
 * Return: n
 */
char *string_toupper(char *n)
{
	int t;

	t = 0;
	while (n[t] != '\0')
{
	if (n[t] >= 'a' && n[t] <= 'z')
		n[t] = n[t] - 32;
	t++;
}
	return (n);
}
