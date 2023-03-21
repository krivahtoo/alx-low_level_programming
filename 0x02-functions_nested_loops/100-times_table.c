#include "main.h"

/**
 * print_number - print number.
 *
 * @n: the number to print.
 */
void print_number(int n)
{
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

/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * @n: number to print for.
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int x = i * j;

				if (x < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (x < 100 && j != 0)
					_putchar(' ');
				print_number(x);
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
