#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: integer to print
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 2;
	int x = 0;

	while (i >= 0)
	{
		if (n & (1 << i))
		{
			x = 1;
			_putchar('1');
		}
		else if (x || i == 0)
			_putchar('0');
		i--;
	}
}
