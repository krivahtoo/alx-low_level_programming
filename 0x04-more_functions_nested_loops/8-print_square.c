#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 *
 * @size: square size
 */
void print_square(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
			_putchar('#');
		if (i != 1)
			_putchar('\n');
	}
	_putchar('\n');
}
