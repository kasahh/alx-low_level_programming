#include <stdio.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 if success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c); }
	putchar('\n');
	return (0);
}
