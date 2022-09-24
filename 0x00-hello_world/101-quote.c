#include <stdio.h>
/**
 * main - print char to std err
 *
 * Return: 1 when Success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), strlen(str), stdout);
	return (1);
}
