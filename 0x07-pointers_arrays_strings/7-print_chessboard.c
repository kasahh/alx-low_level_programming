#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int c = 8;

	i = 0;
	while (i < c)
	{
		j = 0;
		while (j < c)
		{
			_putchar(a[i][j]);

			j++;
		}

		_putchar('\n');

		i++;
	}
}
