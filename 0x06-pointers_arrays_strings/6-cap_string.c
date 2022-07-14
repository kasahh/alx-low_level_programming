#include "main.h"
/**
 * cap_string - capitalize strings
 * @s: string
 * Return: result
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char seperators[] = ",;.!?(){}\n\t\" ";

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; seperators[j] != '\0'; j++)
			{
				if (s[i - 1] == seperators[j])
				{
					s[i] = s[i] - 'a' + 'A';
				}
			}
		}
	i++;
	}

	return (s);
}

