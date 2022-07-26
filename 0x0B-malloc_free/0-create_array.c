#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of the array
 * @c: char
 * Return: array or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		fprintf(sterr, "error allocating memory\n");
	}
	else
	{
		i = 0;

		while (i < size)
		{
			arr[i] = c;

			i++;
		}

		arr[i] = '\0';

	}

	return (arr);

	free(arr);
}
