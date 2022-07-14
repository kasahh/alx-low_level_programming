#include "main.h"
/**
 * _strncat - cocatenate string
 * @dest: destination
 * @src:source
 * @n: value
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
