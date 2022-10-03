#include "main.h"
/**
 * _strspn - function to get the length of a substring
 * @s: string
 * @accept: prefix substring
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] && accept[j])
	{
		if (!(s[i] == accept[j]))
		{
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}

	return (i);
}
