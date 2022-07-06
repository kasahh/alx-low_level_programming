#include "main.h"
/**
 * print - print using putchar
 *@var: value to print
 */
void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}
/**
 * print_times_table - print the times table
 *@n: time table to print
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (j == 0)
				_putchar('0' + prod);
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod < 100)
			{
				_putchar(' ');
				print(prod);
			}
				else
			{
				print(prod);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
