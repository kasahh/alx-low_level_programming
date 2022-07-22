#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints arguments it receives
 * @argc: argument count
 * @argv: argument array
 * Return: returns int 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
