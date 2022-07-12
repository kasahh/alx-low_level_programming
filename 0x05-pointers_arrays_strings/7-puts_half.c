#include "main.h"
/**
 * puts_half - puts half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len;
	int hlen;

	for (len = 0; str[len] != '\0'; len++)
	;

	if (len % 2 == 0)
	{	hlen = len / 2; }
	else
	{	hlen = ((len - 1) / 2) + 1; }

	while (hlen < len)
	{
		_putchar(str[hlen]);
		hlen++;
	}

	_putchar('\n');
}
