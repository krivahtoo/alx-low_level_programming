#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to string
 * @b: byte constant to fill with.
 * @n: number of bytes to fill.
 *
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		n--;
		s++;
	}
	return (ptr);
}
