#include "main.h"
/**
 * print - print value
 * @i: value
 */
void print(int i)
{ 
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i/10)
		print(i / 10);
	_putchar(i % 10 + '0')
}
/**
 * more_numbers(void)
 */
void more_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		int k = 0;

		do {
			if (k < 10)
				print(k);
			else
			{
				print(k);
			}
			k++
		}
		while (k < 15);
		j++;
		_putchar('\n');
	}
}
