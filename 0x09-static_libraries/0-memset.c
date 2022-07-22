#include "main.h"
/**
 * _memset - fills first n bytes of memory with constant byte b
 * @s:	pointer
 * @b:	bytes to fill with
 * @n:	number of bytes to fill
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
