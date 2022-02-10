#include <stdio.h>
/**
 * main - print values for variables
 * Return: 0 is the value to return
 */
int main(void)
{
printf("Side of a char: %d bytes\n", sizeof(char));
printf("Size of an int: %d bytes\n", sizeof(int));
printf("Size of a long int: %d byte\n", sizeof(long int));
printf("Sizeof a long long int: %d byte\n", sizeof(long long int));
printf("Size of a float: %d byte\n", sizeof(float));
return (0);
}
