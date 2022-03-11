#include "main.h"
#include <stdlib.h>
/**
 * array_range - this is a main
 * @min: this is min
 * @max: this is max
 * Return: str
 */
int *array_range(int min, int max)
{
	int p, size;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	arr = malloc(sizeof(*arr) * size);
	if (!arr)
	{
		return (NULL);
	}
	for (p = 0; p < size && min <= max; p++, min++)
	{
		arr[p] = min;
	}
	return (arr);
}
