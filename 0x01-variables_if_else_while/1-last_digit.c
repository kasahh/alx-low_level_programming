#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks if last digit of n > or < 5 or  == 0
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, l); }
	else if (l == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, l); }
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l); }
	return (0);
}
