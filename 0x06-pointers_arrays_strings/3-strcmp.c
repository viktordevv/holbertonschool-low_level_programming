#include "main.h"
/**
 * _strcmp - this is strcmp funt
 * @s1: this is s1 funt
 * @s2: this is s2 funt
 * Return: 0 no return
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
{
	if (s1[i] != s2[i])
{
	return (s1[i] - s2[i]);
}
	i++;
}
	return (0);
}
