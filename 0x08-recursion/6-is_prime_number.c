#include "main.h"

/**
 * check - check if a number is a prime number
 *
 * @i: iterator
 * @n: the number
 *
 * Return: 1 true, 0 false
 */
int check(int i, int n)
{
	if (n < 2)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (check(i + 1, n));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: intiger to check
 *
 * Return: 1 true, 0 false
 */
int is_prime_number(int n)
{
	return (check(2, n));
}
