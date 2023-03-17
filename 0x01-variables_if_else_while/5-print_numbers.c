#include <stdio.h>

/**
 * main - Task 5. Numbers
 *
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		printf("%d", i++);

	putchar('\n');
	return (0);
}

