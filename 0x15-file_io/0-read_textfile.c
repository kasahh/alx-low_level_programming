#include "main.h"
/**
 * read_textfile - it reads text file and prints it
 * @filename: pointer
 * @letters: letters count
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, fread, fwrite;
	char *num;

	num = malloc(sizeof(char) * letters);
	if (num == NULL)
		return (0);
	if (num == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	fread = read(file, num, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, num, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(num);
	return (fwrite);
}
