#include "main.h"
/**
 * *_strcpy - string copier
 * @src: source to copy from
 * @dest: destination to copy to
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do { i++;
		dest[i] = src[i]; }
	while (src[i] != '\0');

	return (dest);
}
