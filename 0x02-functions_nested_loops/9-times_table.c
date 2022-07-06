#include "main.h"
/**
 * times_table - multiplication table for 9
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
		{
		for (j = 0; j <= 9; j++)
			{
			prod = i * j;
			if (j == 0)
				_putchar('0' + prod);
			else if (prod < 10)
				{
				_putchar(' ');
				_putchar('0' + prod);
				}
			else
				{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
				}
			if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		_putchar('\n');
		}
}
