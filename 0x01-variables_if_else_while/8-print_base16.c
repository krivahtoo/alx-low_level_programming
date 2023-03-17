#include <stdio.h>

/**
 * main - Task 8. Hexadecimal
 *
 * prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
		putchar(i++);

	i = 'a';
	while (i <= 'f')
		putchar(i++);

	putchar('\n');
	return (0);
}

