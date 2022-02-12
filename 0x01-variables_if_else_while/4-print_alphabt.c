#include <stdio.h>
/**
 * main - vamos de la a hasta la q
 * imprimiendo de la e hasta la q
 * Return: 0 esto no retorna nunca
 */
int main(void)
{
char t;
for (t = 'a'; t <= 'z'; t++)
if (t != 'q' && t != 'e')
putchar(t);
putchar('\n');
return (0);
}
