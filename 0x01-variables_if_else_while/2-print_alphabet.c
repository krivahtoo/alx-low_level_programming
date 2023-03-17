#include <stdio.h>

/**
 * main - Task 2. I sometimes suffer from insomnia.
 * And when I can't fall asleep, I play what I call the alphabet game
 *
 * prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr = 'a';

	while (chr <= 'z')
		putchar(chr++);

	putchar('\n');
	return (0);
}

