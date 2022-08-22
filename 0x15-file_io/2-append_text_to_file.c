#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: file to append to
 * @text_content: string to append
 * Return: returns 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, fwrite;
	int i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_RDWR, 0664);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		fwrite = write(file, text_content, i);
		if (fwrite == -1)
			return (-1);
	}
	close(file);
	return (1);
}
