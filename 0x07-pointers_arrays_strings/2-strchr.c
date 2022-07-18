#include "main.h"
/**
 * _strchr - function to locate a character in a string
 * @s: string
 * @c: character to locate
 * Return: char or Null
 */
char *_strchr(char *s, char c)
{
	char *f;
	int i = 0;

	while (s[i] >= 0)
	{
		if (s[i] >= c)
		{
			f = &s[i];
			break;
		}
		else
		{
			f = 0;
		}

		i++;
	}

	return (f);
}
