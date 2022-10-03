#include "main.h"
/**
 * _isalpha - check if alpha
 *@c: character to check
 * Return: 1 if alpha or 0 if not
 */
int _isalpha(int c)
{
	int small = (c >= 'a' && c <= 'z');
	int capital = (c >= 'A' && c <= 'Z');

	if (small || capital)
		return (1);
	else
		return (0);
}
