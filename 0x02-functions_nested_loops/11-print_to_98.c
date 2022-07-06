#include "main.h"
/**
 * print - print using -putchar
 *@n: value to print
 */
void print(int n);
/**
 * print_to_98 - print natural numbers to 98
 *@val: value to start print from
 */
void print_to_98(int val)
{
	int max = 98;

	if (val > max)
	{
		int i;

		for (i = val; i >= max; i--)
		{
			print(i);
			if (i != max)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
		{
			int j;

			for (j = val; j <= max; j++)
			{
				print(j);
				if (j != max)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
	}
	_putchar('\n');
}
/**
 * print - print using -putchar
 *@n: value to print
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
