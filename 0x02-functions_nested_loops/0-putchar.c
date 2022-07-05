#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char put[] = "_putchar";
	int i;

	int lenPut = sizeof(put) / sizeof(put[0]);

	for (i = 0; i < lenPut - 1; i++)
		{ _putchar(put[i]); }
	_putchar('\n');

	return (0);
}
