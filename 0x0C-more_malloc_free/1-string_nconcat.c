#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - this is main funtion
 * @s1: this is s1
 * @s2: this is s2
 * @n: this is n funntion
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
char *p;

if (!s1)
{
s1 = "";
}
if (!s2)
{
s2 = "";
}
p = malloc(sizeof(char) * strlen(s1) + n + 1);
if (!p)
{
return (NULL);
}
for (; i < (strlen(s1) + n); i++)
{
if (i < strlen(s1))
{
p[i] = s1[i];
}
else
{
p[i] = s2[j++];
}
}
p[i] = '\0';
return (p);
}
