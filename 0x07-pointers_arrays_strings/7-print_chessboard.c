#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: chessboard to print
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[j][i]);
		_putchar('\n');
	}
}
