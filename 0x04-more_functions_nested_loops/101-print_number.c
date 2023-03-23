#include "main.h"

/**
 * print_number - print number.
 *
 * @n: the number to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n != 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar('0' + (n % 10));
	}
	else
	{
		_putchar('0');
	}
}

