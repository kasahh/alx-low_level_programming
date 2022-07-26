#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: Null or pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr	==  NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr);

			for (j = 0; j <= i; j++)
				free(ptr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
