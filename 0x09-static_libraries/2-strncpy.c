#include "main.h"
/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: value
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	j = 0;
	while (src[j])
	{
		j++;
	}

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	i = j;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
