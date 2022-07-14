#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: n
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = n - 1;

	while (i >= (n / 2))
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i--;
	}
}
