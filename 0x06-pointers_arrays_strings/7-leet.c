#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: string
 * Return: result
 */
char *leet(char *s)
{
	int i;
	int j;
	char array[] = "aAeEoOtTlL";
	char replace[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; array[j] != '\0'; j++)
			if (s[i] == array[j])
				s[i] = replace[j / 2];
	}

	return (s);
}
