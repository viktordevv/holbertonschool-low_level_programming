#include "main.h"
/**
 * _pow_recursion - this is main recurs
 * @x: this is x funti
 * @y: this is y funtion
 * Return: x -y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
