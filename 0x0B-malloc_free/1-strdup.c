#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: returns NULL, 0 or p
 */
char *_strdup(char *str)
{
	unsigned int len;

	unsigned int i;

	char *p;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len])

		len++;

	p = malloc(sizeof(*str) * (len + 1));

	if (p == NULL)
		return (0);

	i = 0;

	while (str[i] != '\0')
	{
		p[i] = str[i];

		i++;
	}

	return (p);
}
