#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: integer to compute value for.
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	return (n);
}
