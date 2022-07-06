#include "main.h"
/**
 * print_last_digit - print the last digit
 *@i: number to print last digit of
 * Return: last digit
 */
int print_last_digit(int i)
{
	int digit;

	if (i < 0)
		digit = -1 * (i % 10);
	else
		digit = i % 10;
	_putchar((digit) + '0');

	return (digit);
}
