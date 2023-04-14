#include "main.h"
#include <stddef.h>

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
