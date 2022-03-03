#include "main.h"
/**
 * _puts_recursion - this is main funtion
 * @s: this is s funt
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        _putchar('\n');
    }
}