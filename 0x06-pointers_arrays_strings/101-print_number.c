#include "main.h"

/**
 * _abs - get absolute of a number
 *
 * @n: number
 *
 * Return: absolute number
 */
int _abs(int n)
{
	if (n < 0)
		return ((-1) * n);
	return (n);
}

/**
 * print_int - print a number.
 *
 * @n: number to print
 */
void print_int(int n)
{
	if (n != 0)
	{
		if (n / 10 != 0)
			print_int(n / 10);
		_putchar('0' + _abs(n % 10));
	}
	else
		_putchar('0');
}

/**
 * print_number - prints an integer.
 *
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	print_int(n);
}
