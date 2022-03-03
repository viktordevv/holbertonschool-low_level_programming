#include "main.h"
/**
 * _sqrt_recursion - this is main funntion
 * @n: this is n funtion
 * Return: n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - this is other main funtion
 * @n: this is n funtion
 * @i: this is other funtion
 * Return: i
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
