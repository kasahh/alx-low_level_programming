#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums parameters
 * @n: number of parameters
 * @...: parameters
 * Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	int sum = 0;

	va_start(l, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(l, int);

	va_end(l);
	return (sum);
}
