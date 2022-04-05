#include "main.h"
/**
 * set_bit - this is main funtion
 * @n: this is funtion
 * @index: this is index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int p = 0;

while (index >= 63)
return (-1);
{
p = 1 << index;
*n = (*n | p);
return (1);
}
}
