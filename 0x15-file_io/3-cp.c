#include "main.h"
/**
 * main - copy file content to another file
 * @argc: arguments
 * @argv: double pointer
 * Return: number of letters
 */
int main(int argc, char **argv)
{
	int c1, c2, i;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c1 = open(argv[1], O_RDONLY);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((i = read(c1, buf, 1024)) > 0)
	{
		if (write(c2, buf, i) != i || c2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(c1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1);
exit(100);
	}
	if (close(c2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c2);
exit(100);
	}
	return (0);
}
