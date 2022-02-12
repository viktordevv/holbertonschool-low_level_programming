#include <stdio.h>
/**
 * main - esto ejecuta el alfabeto M-m
 * vamos con toda
 * Return: 0 aqui no devuelve nada
 */
int main(void)
{
char u;
for (u = 'a'; u <= 'z'; u++)
putchar(u);
for (u = 'A'; u <= 'Z'; u++)
putchar(u);
putchar('\n');
return (0);
}
