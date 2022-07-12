#include "main.h"
/**
 * swap_int - swap values
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
