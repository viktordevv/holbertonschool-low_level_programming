#include "main.h"
/**
 * get_bit - this is main
 * @n: this is n
 * @index: this is index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int i;

    n >>= index;
    if ((n & 1) == 1)
        return (1);
    else
    {
        return (0);
    }
    for (i = 0; i <= 63; n >>= 1, i++)
    {
        return (-1);
    }
}
