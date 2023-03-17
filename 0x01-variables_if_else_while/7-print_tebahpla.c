#include <stdio.h>

/**
 * main - Task 7. Smile in the mirror
 *
 * prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'z';

	while (chr >= 'a')
		putchar(chr--);

	putchar('\n');
	return (0);
}

