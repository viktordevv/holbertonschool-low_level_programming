#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Greater than or 6
 * Return: 0  is the value to return
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("Last digit of %d and %i\n", n, n % 10);
else if (n == 0)
printf("Last digit of int and is 0\n");
else if (n < 6)
printf("Last digit of int and is less than 6 and not 0\n");
return (0);
}
