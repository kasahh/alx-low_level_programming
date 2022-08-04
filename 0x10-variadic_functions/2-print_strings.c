#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of arguments
 * Return: returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;
	char *s;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(l, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(l);

	printf("\n");
}
