#include "main.h"
/**
 * _isalpha - print 1110
 * @c:upper case and lower case
 * Return: 0  this is a return
 */

int _isalpha(int c)

{
	if (c >= 'a' && c < 'z')
		return (1);

	else if (c >= 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
