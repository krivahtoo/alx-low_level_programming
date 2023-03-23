#include "main.h"

/**
 * print_number - print a number.
 *
 * @n: number to print
 */
void print_number(int n)
{
	if (n != 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('\n');
	}
}

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++) {
		for (i = 0; i <= 14; i++)
			print_number(i);
		_putchar('\n');
	}
}
