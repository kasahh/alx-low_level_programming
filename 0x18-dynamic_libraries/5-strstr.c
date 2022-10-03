#include "main.h"
/**
 * _strstr - finds first occurrence of substring
 * @haystack: string
 * @needle: sunstring
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	int len = 0;
	char *f;

	while (needle[len])
		len++;
	i = 0;
	while (haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}

	if (j == len)
	{
		f = &haystack[i - j];

		return (f);
	}
	else
	{
		return (0);
	}
}
