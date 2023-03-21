#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i,ch = 'a';

	for (i = 0; i < 10; i++)
	{
		while (ch <= 'z')
			_putchar(ch++);
		_putchar('\n');
		ch = 'a';
	}
}
