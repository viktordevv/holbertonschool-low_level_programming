#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - this is main funtion
 * @s1: this is s1
 * @s2: this is s2
 * @n: this is n funntion
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i;
	unsigned int j;

	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	i = j = 0;

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str[i] = s2[j];
		i++, j++;
	}
	str[i] = '\0';
	return (str);
}