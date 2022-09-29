#include <stdio.h>
/**
 * main - prints alphabets except q and e
 *
 * Return: 0 if success
 */
int main(void)
{
	int chr = 97;
	int i;

	for (i = 0; i < 26; i++)
	{
		if (chr == 'q' || chr == 'e')
		{
			chr++; }
		else
		{
			putchar(chr);
			chr++; }
	}
	putchar('\n');
	return (0);
}
