#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that returns number of arguments
 * @argc: returns argument count
 * @argv: returns array of arguments
 * Return: returns int 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{

	int argcount;

	argcount = argc - 1;
	printf("%d\n", argcount);

	return (0);
}
