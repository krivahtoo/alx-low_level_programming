#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Write a C program that prints exactly `and that piece of art is useful"
 * - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, strlen(str), 1, stderr);
	return (1);
}

