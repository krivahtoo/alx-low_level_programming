#include "main.h"
#include <stdio.h>

/**
 * print_number - print formated number.
 *
 * @n: number to print
 */
void print_number(int n)
{
	printf("%d", n);

	if (n != 98)
		printf(", ");
	else
		printf("\n");
}

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: number to start from.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
			print_number(i);
	}
	else
	{
		for (i = n; i >= 98; i--)
			print_number(i);
	}
}
