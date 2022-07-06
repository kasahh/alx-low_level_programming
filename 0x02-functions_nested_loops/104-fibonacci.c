#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int s1 = 0, s2 = 0, t1 = 1, t2 = 2;
	unsigned long int con1, con2, con3;
	int count;

	printf("%lu, %lu, ", t1, t2);
	for (count = 2; count < 98; count++)
	{
		if (t1 + t2 > LARGEST || s2 > 0 || s1 > 0)
		{
			con1 = (t1 + t2) / LARGEST;
			con2 = (t1 + t2) % LARGEST;
			con3 = s1 + s2 + con1;
			s1 = s2;
			s2 = con3;
			t1 = t2;
			t2 = con2;
			printf("%lu%010lu", s2, t2);
		}
		else
		{
			con2 = t1 + t2;
			t1 = t2;
			t2 = con2;
			printf("%lu", t2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
