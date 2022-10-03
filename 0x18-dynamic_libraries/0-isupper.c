#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if character is uppercase
 * @c: character to check
 * Return: 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
