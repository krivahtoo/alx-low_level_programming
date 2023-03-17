#include <stdio.h>

/**
 * main - Task 6. Numberz
 *
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
		putchar(i++);

	putchar('\n');
	return (0);
}

