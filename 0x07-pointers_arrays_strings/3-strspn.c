#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string to check
 * @accept: bytes to check from
 *
 * Return: bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s && _strchr(accept, *s++))
		n++;

	return (n);
}

/**
 * _strchr - locates a character in a string.
 *
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to first or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}
	return (NULL);
}
