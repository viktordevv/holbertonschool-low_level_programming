#include <stdio.h>
/**
* main - the maxi list
* Return: 0 this is return
*/
int main(void)
{
	int f;

	for (f = 1; f < 100; f++)
		if (f % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (f % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (f % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", f);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
