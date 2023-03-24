#include "main.h"

/**
 * print_n - print long int
 *
 * @n: number to print.
 */
void print_n(int n)
{
	if (n >= 10 || n <= -10)
		print_n(n / 10);
	if (n < 0)
		_putchar('0' + (n % 10) * -1);
	else
		_putchar('0' + (n % 10));
}

/**
 * print_number - print number.
 *
 * @n: the number to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	if (n != 0)
	{
		print_n(n);
	}
	else
	{
		_putchar('0');
	}
}

