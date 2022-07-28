#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return  (NULL);
	i = (max - min) + 1;
	ptr = malloc(i * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	j = 0;

	while (j <= i && min <= max)
	{
		ptr[j] = min;
		j++;
		min++;
	}

	return (ptr);
}
