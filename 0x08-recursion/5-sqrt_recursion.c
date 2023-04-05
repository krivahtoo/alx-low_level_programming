#include "main.h"

/**
 * _sqrt - recursively find square root of n
 *
 * @n: value to find square root for
 * @h: high limit
 * @l: low limit
 *
 * Return: square root
 */
int _sqrt(int n, int h, int l)
{
	int m;

	if (l > h)
		return (-1);
	m = (l + h) / 2;

	if ((m * m == n) && ((m + 1) * (m + 1) > n))
		return (m);
	else if (m * m >= n)
		return (_sqrt(n, m - 1, l));
	else
		return (_sqrt(n, h, m + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, n, 0));
}
