#include "main.h"
#include <stdio.h>
/**
 * rev_string - string reversing
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int len;
	int hlen;
	char val;

	for (len = 0; s[len] != '\0'; len++)
		;

	i = 0;
	hlen = len / 2;

	while (hlen--)
	{
		val = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = val;
		i++;
	}
}
