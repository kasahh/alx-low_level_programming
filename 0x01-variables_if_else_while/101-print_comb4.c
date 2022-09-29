#include <stdio.h>
/**
 * main - prints combination of three ints
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (!(i == j && j == k) && (i < j && j < k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' '); }
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
