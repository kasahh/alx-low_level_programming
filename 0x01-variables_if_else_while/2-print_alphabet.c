#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 if success
 */
int main(void)
{
	int chr = 97;
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
