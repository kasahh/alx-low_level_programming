#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if input is a digit
 * @c: inputted character
 *
 * Return: return 1 if digit else return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
