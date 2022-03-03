#include "main.h"
/**
 * _strlen_recursion - this is main funtion
 * @s: this is s funtion
 * Return: len *
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
