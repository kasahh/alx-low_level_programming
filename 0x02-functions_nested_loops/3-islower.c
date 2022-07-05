#include "main.h"
/**
 * _islower - check for lower case
 *@c: letter or number to check
 * Return: 1 for lowercase or 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
