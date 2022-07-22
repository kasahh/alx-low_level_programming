#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints file name
 * @argc: does nothing
 * @argv: returns filename
 * Return: int 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
