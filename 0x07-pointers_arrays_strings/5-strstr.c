#include "main.h"
/**
 * _strstr - this is main funtion
 * @haystack: this is a funtion hay
 * @needle: this is a funtion nee
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *p = needle;

		while (*t == *p && *p != '\0')
		{
			t++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}