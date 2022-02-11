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
int z;
srand(time(0));
n = rand() - RAND_MAX / 2;
z = n % 10;
if (z > 5)
printf("and is greater than 5\n", z);
else if (z == 0)
printf("and is 0\n", z);
else if (z < 6)
printf("and is less than 6 and not 0\n", z);
return (0);
}
