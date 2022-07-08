#include "main.h"
/**
 * print_diagonal - print diagonals
 * @n: number of times to print diagonal
 */
void print_diagonal(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			int i;

			for (i = 1; i <= j; i++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
}
