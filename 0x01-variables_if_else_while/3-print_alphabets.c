#include <stdio.h>
/**
 * main - prints lower then uppercase char of a-z
 *
 * Return: 0 if success
 */
int main(void)
{
	int chr = 97;
	int CHR = 65;
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(chr);
		chr++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(CHR);
		CHR++;
	}
	putchar('\n');
	return (0);
}
