#include <stdio.h>
#define stopVar 100
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizz Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != stopVar)
			printf(" ");
		i++;
	} while (i < stopVar + 1);
	printf("\n");

	return (0);
}
