#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: string to print.
 */
void puts_half(char *str)
{
	int n = 0, i = 0;

	n = _strlen(str);
	if (n % 2 == 0)
		i = n - (n / 2);
	else
		i = n - ((n - 1) / 2);
	while (i < n)
		_putchar(str[i++]);

	_putchar('\n');
}

/**
 * _strlen - calculates the length of a string.
 *
 * @s: string to get length.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
