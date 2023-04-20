#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: arguments length
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i = 0;

	va_start(ap, n);
	for (; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
