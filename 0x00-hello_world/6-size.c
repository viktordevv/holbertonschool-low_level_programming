#include <stdio.h>
/**
* main - print variables values
* Return: 0 is values
*/
int main(void)
{
char typeA;
int typeB;
long int tC;
long long int tD;
float z;
printf("Side of a char: %i bytes\n", sizeof(typeA));
printf("Size of an int: %i bytes\n", sizeof(typeB));
printf("Size of a long int: %i bytes\n", sizeof(tC));
printf("Size of a long long int: %i bytes\n", sizeof(tD));
printf("Size of a float: %i bytes\n", sizeof(z));
return (0);
}
