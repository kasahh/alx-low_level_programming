#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int sizeBal = 1;

		do {
			int i;

			for (i = 1; i <= size; i++)
			{
				if (i > (size - sizeBal))
					_putchar('#');
				else
					_putchar(' ');
			}

			_putchar('\n');
			sizeBal++;
		} while (sizeBal <= size);
	}
}
