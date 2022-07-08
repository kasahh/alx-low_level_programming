#include "main.h"
/**
 * print_number - prints number
 * @i: value to print
 */
void print_number(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	print(i);
}
/**
 * print - prints
 * @n: value to print
 */
void print(int n)
{
	if (n / 10)
		print(n / 10);
	_putchar('0' + n % 10);
}
