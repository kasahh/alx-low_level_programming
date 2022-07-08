#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_number - prints number
 * @i: value to print
 * Return: 0 if successful
 */
void print_number(int i)
{
	unsigned int i1 = 0;

	if (i < 0)
	{
		i1 = -n;
		_putchar('-');
	}
	else
	{
		i1 = n;
	}
	if (i1 / 10)
	{
		print_number(i1 / 10);
	}
	_putchar((i1 % 10) + '0');
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
