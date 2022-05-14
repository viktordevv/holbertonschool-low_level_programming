#include "main.h"
/**
 * _strpbrk - this is main funtion
 * @s: this is s funtion
 * @accept: this is accept funtion
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
		return (s);
		}
	s++;
	}

return ('\0');
}
