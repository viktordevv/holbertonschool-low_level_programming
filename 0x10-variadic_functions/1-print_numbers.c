#include "variadic_functions.h"
/**
 * print_numbers - this is main funtion
 * @separator: this is separator
 * @n: this is number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int o;

va_start(args, n);
for (o = 0; o < n; o++)
{
if (!separator)
{
if (i != (n - 1))
printf("%i%s", va_arg(args, int), separator);
else
printf("%i", va_arg(args, int));
}
else
printf("%i", va_arg(args, int));
}
va_end(args);
printf("\n");
}