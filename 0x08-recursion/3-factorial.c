#include "main.h"
/**
 * factorial - This is factorial main
 * @n: this is n funtion
 * Return: n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
