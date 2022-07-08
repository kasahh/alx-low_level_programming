#include "main.h"
/**
 * print_square - print sqauares
 * @size: size of square
 */
void print_square(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int j;

		for (j = 1; j <= size; j++)
		{
			int i;

			for (j = 1; j <= size; j++)
			{
				int i;

				for (i = 1; i <= size; i++)
					_putchar('#');
				_putchar('\n');
			}
		}
	}
}
