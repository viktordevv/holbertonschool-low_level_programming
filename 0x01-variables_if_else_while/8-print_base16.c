#include <stdio.h>
/**
 * main - esto imprime base16
 * del 0 al 9 y de la a al f
 * Return: 0 no retorna nadita
 */
int main(void)
{
	char m;
	char n;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (n = 'a'; n <= 'f'; n++)
	       putchar(n);
putchar('\n');
return (0);
}
