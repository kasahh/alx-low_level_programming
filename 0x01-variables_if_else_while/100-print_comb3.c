#include <stdio.h>
/**
 * main - prints combination of two numbers without repeating
 *
 * Return: 0 if success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			if (i != j)
			{
				if (i < j)
				{
					putchar(i + '0');
					putchar(j + '0');
					if (!(i == 8 && j == 9))
					{
						putchar(',');
						putchar(' '); }
					}
			}
		}
	putchar('\n');
	return (0);
}
