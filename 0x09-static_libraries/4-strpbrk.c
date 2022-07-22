#include "main.h"
/**
 * _strpbrk - locates the first occurence in the string s
 * @s: string
 * @accept: string
 * Return: unsigned int
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *f;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = &s[i];

				return (f);
			}

			j++;
		}

		i++;
	}

	return (0);
}
