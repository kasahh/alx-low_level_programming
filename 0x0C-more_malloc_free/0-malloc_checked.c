#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter
 * Return: returns pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
