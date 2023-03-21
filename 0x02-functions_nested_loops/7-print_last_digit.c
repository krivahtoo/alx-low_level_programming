#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: number to print last digit.
 *
 * Return: last digit of num.
 */
int print_last_digit(int num)
{
	int last = _abs(num) % 10;

	_putchar('0' + last);
	return (last);
}

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
