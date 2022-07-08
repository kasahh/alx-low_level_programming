#include <stdio.h>
#define stopVar 100
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	do {
		if (i % 15 == 0)
			printf("FizzBuzz");
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
