#include <stdio.h>
/**
* main - print variables values
* Return: 0 is values 
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float z; 
printf("Side of a char: %i bytes\n", sizeof(a));
printf("Size of an int: %i bytes\n", sizeof(b));
printf("Size of a long int: %i bytes\n", sizeof(c));
printf("Size of a long long int: %i bytes\n", sizeof(d));
printf("Size of a float: %i bytes\n", sizeof(z));
return (0);
}
