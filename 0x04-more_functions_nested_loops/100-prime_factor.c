#include <stdio.h>
/**
 * main - prints largest prime factor
 * Return: 0 if successful
 */
int main(void)
{
	long int var = 612852475143;
	long int prime = 2;

	while (var > 1)
	{
		if (var % prime == 0)
			var /= prime;
		else
			prime++;
	}
	printf("%ld\n", prime);
	return (0);
}
