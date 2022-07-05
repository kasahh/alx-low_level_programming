#include "main.h"
/**
 * print_alphabet_x10 - print alpahbets in small letters x 10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{	int i = 0;

	while (i < 10)
	{ int j;
		for (j = 'a'; j <= 'z'; j++)
			{ _putchar(j); }
		_putchar('\n');
		i++;
	}
}
