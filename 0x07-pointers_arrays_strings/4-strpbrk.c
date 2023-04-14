#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string to check
 * @accept: bytes to check for
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s) != NULL)
			break;
		s++;
	}

	return (s);
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
			return (s);
		s++;
	}
	return (NULL);
}
