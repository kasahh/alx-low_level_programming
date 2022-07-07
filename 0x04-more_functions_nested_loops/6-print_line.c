#include "main.h"
/**
 * print_line - print lines
 *@n: number of times to print _
 */
void print_line(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
}
