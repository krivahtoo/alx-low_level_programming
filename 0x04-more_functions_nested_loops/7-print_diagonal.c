#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = i;
		while (j-- > 0)
			_putchar(' ');
		_putchar('\\');
		if (i + 1 != n)
			_putchar('\n');
	}

	_putchar('\n');
}
