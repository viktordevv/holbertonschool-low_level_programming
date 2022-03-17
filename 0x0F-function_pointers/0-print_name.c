#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - this is a main
 * @name: this is name
 * @f: this is f
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(f)(name);
}
