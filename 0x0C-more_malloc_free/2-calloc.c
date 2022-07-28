#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array using malloc
 * @nmemb: elements
 * @size: size
 * Return: returns pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int prod;
	char *ptr;


	if (nmemb == 0 || size == 0)
		return (NULL);
	prod = size * nmemb;
	ptr = malloc(prod);

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < prod)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
