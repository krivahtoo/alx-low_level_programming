#include "main.h"

/**
 * print_number - print formated number.
 *
 * @n: number to print.
 * @first_column: 1 if it is the first column, 0 other wise.
 */
void print_number(int n, int first_column)
{
	if (n >= 10)
	{
		_putchar('0' + (n - (n % 10)) / 10);
	}
	else if (first_column != 1)
	{
		_putchar(' ');
	}
	_putchar('0' + (n % 10));
}

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			print_number(i * j, j == 0);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
