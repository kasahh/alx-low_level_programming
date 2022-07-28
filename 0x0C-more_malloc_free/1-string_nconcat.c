#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: input
 * Return: returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *ptr;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n >= l2)
		ptr = malloc(sizeof(*s1) * l1 + (l2 + 1));
	else
		ptr = malloc(sizeof(*s1) * l1 + (n + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		ptr[i] = s1[i];

		i++;
	}

	j = 0;
	while (n < l2 && i < l1 + n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	while (n >= l2 && i < (l1 + l2))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
