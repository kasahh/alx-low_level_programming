#include "main.h"
/**
 * _strcat - function to concatenate strings
 * @dest: destination
 * @src: source
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
