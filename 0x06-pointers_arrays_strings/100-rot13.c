#include "main.h"
/**
 * rot13 - encodes string
 * @s: string
 * Return: result
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (j < 52)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		j++;
		}
	i++;
	}

	return (s);
}
