#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char l[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int ar;

	ar = strlen(l);
	for (i = 0; i < ar; i++)
		{ putchar(l[i]); }
	putchar('\n');
	return (0);
}
