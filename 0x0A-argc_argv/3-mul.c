#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is funtion main
 * @argc: this is argc
 * @argv: this is argv
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int a, b, result;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);

result = a *b;
printf("%d\n", result);

return (0);
}
