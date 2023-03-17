#include <stdio.h>

/**
 * main - Task 3. alphABET
 *
 * Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'a';

	while (chr <= 'z')
		putchar(chr++);
	chr = 'A';
	while (chr <= 'Z')
		putchar(chr++);

	putchar('\n');
	return (0);
}

