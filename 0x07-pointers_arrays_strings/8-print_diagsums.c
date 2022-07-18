#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print sums of two diagonals
 * @a: array
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int *arr = (int *) a;
	int total1 = 0;
	int total2 = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				total1 += arr[i * size + j];
			if ((i + j) == (size - 1))
				total2 += arr[i * size + j];
		j++;
		}

	i++;
	}

	printf("%d, %d\n", total1, total2);
}
