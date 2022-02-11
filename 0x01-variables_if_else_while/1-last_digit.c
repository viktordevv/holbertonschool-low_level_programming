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
printf("Last digit of n and is greater than 5\n", n, n % 10);
else if (n == 0)
printf("Last digit of n and is 0\n");
else if (n < 6)
printf("Last digit of n is less than 6 and not 0\n");
return (0);
}
