#include <stdio.h>

/**
 * main - Task 4. When I was having that alphabet soup,
 * I never thought that it would pay off
 *
 * Prints the alphabet in lowercase all the letters except q and e,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'a';

	while (chr <= 'z')
	{
		if (chr != 'q' && chr != 'e')
			putchar(chr);
		chr++;
	}

	putchar('\n');
	return (0);
}

