#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i1 = 1, sum, i1 = 2, imax = 50;
	int j;

	printf("%lu, %lu, ", i1, i2);
	for (j = 2; j < imax; j++)
	{
		sum = i1 + i2;
		i1 = i2;
		i2 = sum;
		printf("%lu", sum);
		if (j != imax - 1)
			print(", ");
	}
	printf("\n);

	return (0)
};
