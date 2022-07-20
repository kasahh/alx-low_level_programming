#include "main.h"

int natural_sqrt(int n, int m);

/**
* _sqrt_recursion - calculate natural square root of a int
* @n: int
* Return: root
*/

int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 0));
}

/**
* natural_sqrt - find natural square root.
* @n: number
* @m: square test
* Return: natural square root
*/

int natural_sqrt(int n, int m)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (m * m == n)
		return (m);
	if (m == n / 2)
		return (-1);
	return (natural_sqrt(n, m + 1));
}
