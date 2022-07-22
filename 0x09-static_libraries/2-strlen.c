#include "main.h"
#include <stdio.h>
/**
 * _strlen - prints length of string
 * @s: points to character
 * Return: counter for string length
 */
int _strlen(char *s)
{
	int counter = 0;

	for (; *s != '\0'; s++)
	{
		counter++;
	}

	return (counter);
}
