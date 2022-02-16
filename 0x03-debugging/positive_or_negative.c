#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random number between negative and positive
 * ejecuta y devuelve
 * Return: 0 esto devuelve en zero
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}

