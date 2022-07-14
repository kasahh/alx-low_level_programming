#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: s1
 * @s2: s2
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
