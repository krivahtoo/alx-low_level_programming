#include "main.h"

/**
 * check - check if a number is palindrome
 *
 * @s: sring to check
 * @l: left index
 * @r: right index
 *
 * Return: 1 if true, 0 otherwise
 */
int check(char *s, int l, int r)
{
	if (s[l] != s[r])
		return (0);
	if (l + 1 == r || l == r)
		return (1);
	return (check(s, l + 1, r - 1));
}

/**
 * _strlen - returns the length of a string.
 *
 * @s: string to get length
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n = 0;

	n = _strlen(s);

	return (check(s, 0, n - 1));
}
